# tdd-by-example

## Setup

### Bazel
We are using Bazel as our build system, so make sure to install `bazel` globally on your machine.


## Building
We are using [Bazel](https://www.bazel.build/) build system.
Everything is defined in BUILD files (+ one WORKSPACE file).
Learn more about Bazel to know how to build specific targets, locate produced binaries and so on.


## Tests
We are using [Catch2](https://github.com/catchorg/Catch2) test framework.

While you can use Bazel to run specific tests, there is `run-tests` script to easily build and run all tests.
This runs tests through Bazel, which is recommended way to do it (by Bazel), but we do lose Catch2 output coloring.

If you want to run it purely through Catch2, without Bazel interfering, you can run binaries that are produced as a result of building Bazel cc_test targets. Let's say you have Bazel cc_test target `my-test`. You can then do: `bazel build //test:my-test` to build the binary and then `bazel-bin/test/my-test` to run it.
