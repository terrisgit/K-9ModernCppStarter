#include "gtest/gtest.h"
#include "nlohmann/json.hpp"

namespace k9 {
namespace {
TEST(Json, One) {
  auto j = R"(
  {
    "happy": true,
    "pi": 3.141
  }
)"_json;

  ASSERT_EQ(j["happy"], true);
}
}  // namespace 
}  // namespace k9
