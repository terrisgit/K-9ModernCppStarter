# This only works on Linux

cc_library (
  name = "inotify-lib",
  # This includes magic is needed because hpp files #include hpp files using <> instead of quotes
  includes = ["src/include"],
  srcs = glob(["src/*.cpp"]),
  visibility = ["//visibility:public"],
  hdrs = glob(["src/include/inotify-cpp/*.h"]),
  deps = ["@boost//:filesystem", "@boost//:bimap"]
)
