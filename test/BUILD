load(":macros.bzl", "simple_target_test")

# In order to be able to run Catch2 tests, it is important to have translation unit with correctly defined main method (as by Catch2 documentation).
cc_library(
    name = "catch-main",
    srcs = ["main.cpp"],
    copts = ["-Itest/vendor/catch2"],
    deps = [
      "//test/vendor/catch2"
    ]
)

# Individual tests (per target).
# Each test expects a target in src/ and a .test.cpp file with same name to exist.
# Add new tests here! Also, add them to test suite all-tests below.
simple_target_test("Money")

# Test suite that runs all the tests.
test_suite(
    name = "all-tests",
    tests = [
        "Money"
    ]
)
