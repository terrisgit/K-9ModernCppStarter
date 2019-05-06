# K-9 Starter Project for Modern C++

# Name

This project is named K-9 because I was thinking about dogs.

# Purpose

This is a modern, opinionated, compliant, multi-platform, multi-threaded C++ project that parses JSON files. It is intended for educational purposes and/or as a starting point for new projects. Go build something awesome in modern C++!

# License

[Apache 2.0](https://www.apache.org/licenses/LICENSE-2.0)

# Disclaimer

The author, [Terris Linenbach](https://github.com/terrisgit), makes no promises about the contents herein and is not responsible for anything. Use at your own risk. Void where prohibited.

# Prerequisites

If you're using OSX, run the 'osx' script. Otherwise, install the following:

- [gcc](https://gcc.gnu.org/install)
- [Bazel](https://docs.bazel.build/versions/master/install.html)
- [clang-format](https://stackoverflow.com/questions/20756924/how-can-i-install-clang-format-in-ubuntu)
- [cppCheck](http://cppcheck.sourceforge.net)

# Dependencies

- [Abseil](https://abseil.io) for writing modern C++ that works with older C++ 11 parsers
- [GoogleTest](https://github.com/google/googletest) for unit testing and mocking
- [nlohmann/json](https://github.com/nlohmann/json) for parsing JSON
- [gabime/spdlog](https://github.com/gabime/spdlog) for logging
- Linux only: [erikzenker/inotify-cpp](https://github.com/erikzenker/inotify-cpp/releases) for listening for filesystem events
    - Uses [Boost via nelhage/rules_boost](https://github.com/nelhage/rules_boost), thus demonstrating how to use Boost
      in your own project or use a dependency that uses Boost

# Origin

This project was created via the [Abseil Bazel Quickstart](https://abseil.io/docs/cpp/quickstart) on March 2019.

# Contributions

PR's are welcome. Please obey the .editorconfig file.

# Builder

Bazel is IMO the best C++ build tool available today. On the other hand, CMake is the most popular. Nobody appears to be using boost-build besides Boost.

I chose Bazel (by Google) because it works well with Abseil and GoogleTest (also by Google). Although Bazel is tricky to configure, CMake is worse. Bazel is well documented for my needs but beware old examples that use deprecated features.

The hardest part was getting a 2019 version of Bazel working with nlohmann/json, which doesn't use Bazel. I started with https://github.com/nathanws/bazel-examples but it is out date and required literally hours (not days, at least) of trial and error. The WORKSPACE file herein is a working example that will assist you greatly when adding dependencies that don't use Bazel.

# Clean

```bash
bazel clean --expunge
```

# Run tests

```bash
bazel test //:k9-test
```

# Build tests

```bash
bazel build -s //:k9-test
```

# Run 'main' executable

Currently just exits

```bash
bazel run //:k9 -- arg1 arg2 arg3
```

# VisualStudio Code Configuration

## Extensions

- vscode-bazel
- C/C++ (Microsoft)
- C/C++ Advanced Lint
    - [See also](https://stackoverflow.com/questions/45160650/why-do-i-get-error-messages-like-unable-to-activate-xx-analyzer-in-vscode)
    - To disable the warning about flexlint, add this to your settings:
        - "c-cpp-flylint.flexelint.enable": false
- Clang-Format
- EditorConfig
- Rainbow Brackets
- GitLens
- Git History

# Notes

- Generate SHA256 hash from a URL https://hash.online-convert.com/sha256-generator

# ToDo

1. Doxygen-to-HTML
2. Lint
3. Automatically format source code
4. Get rid of the OSX-only warning:
```
clang: warning: argument unused during compilation: '-pthread'
```
