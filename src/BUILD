cc_binary(
  name = "main",
  srcs = ["main.cc"],
  deps = ["sine"]
)

cc_library(
  name = "sine",
  srcs = ["sine.cc"],
  hdrs = ["sine.h"]
)

cc_test(
  name = "sine_test",
  srcs = ["sine_test.cc"],
  deps = ["sine", "@gtest//:main"]
)

cc_library(
  name = "scale",
  srcs = ["scale.cc"],
  hdrs = ["scale.h"]
)

cc_test(
  name = "scale_test",
  srcs = ["scale_test.cc"],
  deps = ["scale", "@gtest//:main"]
)
