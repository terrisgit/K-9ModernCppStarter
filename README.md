# C++ 11 Abseil nlohmann/json Threads Bazel GoogleTest Quick Start

# Prerequisites

(See the 'osx' script in this repo for OSX setup)

- [Install Bazel](https://docs.bazel.build/versions/master/install.html)
- [Install gcc](https://gcc.gnu.org/install/)

This project was derived from the [Abseil Bazel QuickStart](https://abseil.io/docs/cpp/quickstart)

# Run the 'main' executable

Currently does nothing exits

```bash
 bazel run //:k9 -- a_commandline_arg
```

# Run the tests

```bash
bazel test //:k9_test
```

# ToDo

1. Add boost
