// Demonstrates using std::bind as an alternative to using
// C++11 lambdas. See https://oopscenities.net/2012/02/24/c11-stdfunction-and-stdbind/

// See test output by running bazel-bin/k9_test

#include <atomic>
#include <iostream>
#include "k9/threadpool.h"
#include "gtest/gtest.h"
#include "absl/time/clock.h"

namespace k9 {
namespace {
// Run a function (passing it different parameters) X times (loops)
// via T threads (threads).
const int threads = 10,
          loops = 10000;

std::atomic<int> ctr;

// A bad way to add two numbers due to race conditions
void add_fail(const int tasknumber) {
  // Print something to see multi-threading is actually happening
  std::cout << "\nTask " << tasknumber+1 << " running\n";
  auto ctr2 = ctr+1;
  absl::SleepFor(absl::Milliseconds(rand()%5));
  ctr = ctr2;
}

// std::atomic<> implements atomic increment. See
// https://en.cppreference.com/w/cpp/atomic/atomic/operator_arith
void add(const int tasknumber) {
  std::cout << "\nTask " << tasknumber+1 << " running\n";
  ++ctr;
}

bool test(std::function<void(int)>f) {
  ctr = 0;
  {
    edk9::ThreadPool tp(threads);
    for (auto i = 0; i < loops; i++) 
      tp.schedule(std::bind(f, i));
  }
  return ctr == loops;
}

TEST(ThreadPool, Fail) {
  ASSERT_NE(true, test(add_fail));
}

TEST(ThreadPool, Success) {
  ASSERT_EQ(true, test(add));
}
}  // namespace 
}  // namespace k9
