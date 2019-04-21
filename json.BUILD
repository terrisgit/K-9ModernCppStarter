cc_library (
  # Naming libraries with _lib instead of -lib doesn't work
  name = "json-lib",
  # This includes magic is needed because hpp files #include hpp files using <> instead of quotes
  includes = ["."],
  visibility = ["//visibility:public"],
  # I was not able to get glob to work after an hour of banging my head
  hdrs = glob(["**/*.hpp"])
)
