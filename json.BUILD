cc_library (
  # Naming libraries with _lib instead of -lib doesn't work
  name = "json-lib",
  # This includes magic is needed because hpp files #include hpp files using <> instead of quotes
  includes = ["."],
  visibility = ["//visibility:public"],
  hdrs = glob(["**/*.hpp"])
)
