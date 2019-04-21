# C++ 11 Abseil nlohmann/json Threads Bazel GoogleTest Quick Start #

So I wanted to write a multithreaded C++ program for an IoT project that worked with any C++11 compiler and parsed JSON files. I naturally wanted the executables to be built with something that could download dependencies (from github), worked on (at least) Linux and OSX, and didn't require makefiles or shell scripts. Because it's 2019, I wanted to be able to write unit tests on day 1.

I created this reusable starter repo so you wouldn't have to reinvent the wheel that I reinvented over the course of several weekends of March/April 2019.

This project is derived from the [Abseil Bazel QuickStart](https://abseil.io/docs/cpp/quickstart). It is named 'k9' because I was thinking about dogs. If you need to build using old versions of gcc, you need Abseil. [nlohmann/json](https://github.com/nlohmann/json) is the best JSON parser for C++ today. GoogleTest is similarly the best of breed for unit testing and mocking.

# License

It is licensed under Apache 2.0. Do whatever you want with it.

Go build something awesome with this!

# Builder

Bazel is IMO the best but CMake is the most popular and nobody appears to be using boost-build besides Boost. I chose Bazel (by Google) because it works well with Abseil and GoogleTest (also by Google). Although Bazel is tricky to configure, CMake is worse. Bazel is well enough documented for my needs but beware old examples that use deprecated features.

The hardest part with all of the code herein was getting a 2019 version of [Bazel](https://bazel.build) to work with nlohmann/json which doesn't use Bazel. I started with https://github.com/nathanws/bazel-examples but it is out date and required literally hours (at least not days!) of trial and error. The WORKSPACE file here is a working example so you can add  more dependencies that don't use Bazel.

# Prerequisites

As promised, this project only requires gcc and Bazel.

- [gcc](https://gcc.gnu.org/install)
- [Bazel](https://docs.bazel.build/versions/master/install.html)

See the 'osx' script in this repo for OSX setup.

# Run the tests

```bash
bazel test //:k9_test
```

# Run the 'main' executable

Currently just exits

```bash
bazel run //:k9 -- arg1 arg2 arg3
```

# ToDo

1. Add Boost
2. Logging (syslog and console)
3. Add Doxygen
4. Get rid of the OSX-only warning
```
clang: warning: argument unused during compilation: '-pthread'
```
