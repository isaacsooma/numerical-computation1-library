INTEGRATION FILES FOR PARTS 1, 2 AND 3

Copy the contents of this package into the root of your existing
numerical-computation1-library project, preserving the folders:

  examples/part1_examples.cpp
  examples/part2_examples.cpp
  examples/part3_examples.cpp
  tests/part1_test.cpp
  tests/part2_tests.cpp
  tests/part3_test.cpp
  CMakeLists.txt

The corrected Part 3 files include the header using the exact spelling
already present in your project:
  part3_floating_Point_and_Invalid_Input.hpp

The CMakeLists.txt retains the existing project source, examples, tests,
and CLI targets, and registers the six new targets.

From the project root, configure, build and run tests:
  cmake -S . -B build
  cmake --build build
  ctest --test-dir build --output-on-failure

This is an integration package, not a complete copy of the library. It does
not replace your existing include/, src/, app/, data/ or other project files.
