# tdd-by-example

Run `bazel build //test:all-tests` to build all tests, which results with binary in `bazel-bin/tests/all-tests`.
Run `bazel-bin/tests/all-tests` to run all the tests.
To make it easier, you can also just run `run-tests` script which runs two commands above after each other.

You can alternatively run `bazel test //test:all-tests` to have bazel build and then run the test, but then the result is reported through the bazel, looking different (less verbose/nice), although maybe more "controlled".


