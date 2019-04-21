cc_library (
  name = "inotify-lib",
  # This includes magic is needed because hpp files #include hpp files using <> instead of quotes
  includes = ["src/include"],
  srcs = glob(["src/*.cpp"]),
  visibility = ["//visibility:public"],
  # I was not able to get glob to work after an hour of banging my head
  hdrs = glob(["src/include/inotify-cpp/*.h"])
)
