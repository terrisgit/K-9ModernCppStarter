# Copyright 2018 Google Inc.  All rights reserved
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

workspace(name = "k9")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# abseil-cpp
http_archive(
  name = "com_google_absl",
  urls = ["https://github.com/abseil/abseil-cpp/archive/7c7754fb3ed9ffb57d35fe8658f3ba4d73a31e72.zip"],  # 2019-03-14
  strip_prefix = "abseil-cpp-7c7754fb3ed9ffb57d35fe8658f3ba4d73a31e72",
  sha256 = "71d00d15fe6370220b6685552fb66e5814f4dd2e130f3836fc084c894943753f",
)

# Google Test
http_archive(
  name = "com_google_googletest",
  urls = ["https://github.com/google/googletest/archive/8b6d3f9c4a774bef3081195d422993323b6bb2e0.zip"],  # 2019-03-05
  strip_prefix = "googletest-8b6d3f9c4a774bef3081195d422993323b6bb2e0",
  sha256 = "d21ba93d7f193a9a0ab80b96e8890d520b25704a6fac976fe9da81fffb3392e3",
)

# nlohmann/json
http_archive(
  name = "json",
  urls = ["https://github.com/nlohmann/json/releases/download/v3.6.1/include.zip"],  # 2019-03-20
  strip_prefix = "include",
  build_file = "@//:build/json.BUILD",
  sha256 = "69cc88207ce91347ea530b227ff0776db82dcb8de6704e1a3d74f4841bc651cf"
)

# erikzenker/inotify-cpp
http_archive(
  name = "inotify",
  urls = ["https://github.com/erikzenker/inotify-cpp/archive/v0.2.0.zip"],  # 2018-12-6
  strip_prefix = "inotify-cpp-0.2.0",
  build_file = "@//:build/inotify.BUILD",
  sha256 = "d338774f49c01ead88060d449915e25dba868db99e43914a17c20c7d995dcc3f"
)

# Boost
git_repository(
    name = "com_github_nelhage_rules_boost",
    commit = "6d6fd834281cb8f8e758dd9ad76df86304bf1869",
    remote = "https://github.com/nelhage/rules_boost",
)

load("@com_github_nelhage_rules_boost//:boost/boost.bzl", "boost_deps")
boost_deps()

# gabime/spdlog
http_archive(
  name = "spdlog",
  urls = ["https://github.com/gabime/spdlog/archive/v1.3.1.zip"],  # 2019-01-18
  strip_prefix = "spdlog-1.3.1",
  build_file = "@//:build/spdlog.BUILD",
  sha256 = "db6986d0141546d4fba5220944cc1f251bd8afdfc434bda173b4b0b6406e3cd0"
)
