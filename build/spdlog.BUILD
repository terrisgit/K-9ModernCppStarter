# This only works on Linux

cc_library (
  name = "spdlog-lib",
  # This includes magic is needed because the headerfiles appear underneath this directory
  includes = ["include"],
  visibility = ["//visibility:public"],
  hdrs = glob(["include/**/*.h"])
)
