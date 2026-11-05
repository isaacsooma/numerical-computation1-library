# Week 2: Core Implementation, Individual Progress Report

**Group:** 22, Numerical Computing 1
**Member:** Acam Gladys Consolate
**Assigned area:** Mathematical Functions

## Weekly objective
This week the project moved from planning into implementation. My focus was developing my assigned functions in separate C++ header and source files, following the conventions we agreed as a group.

## My work this week
My module covers three areas:

- **Element-wise arithmetic:** addition, subtraction, multiplication and division.
- **Scalar mathematical functions:** power, square root, absolute value and exponential.
- **Floating-point support:** checking whether values are finite, and comparing values approximately.

## How I approached it
For element-wise arithmetic, the functions go through the matching elements of the input arrays and store each result in an output array. The input arrays must be the same size.

Each scalar function performs its own operation. Where the input is outside the valid domain, or the result can't be represented, the function has to follow the project's error policy.

For floating-point support, I use helper functions to spot non-finite values and to compare computed results within a tolerance.

## Testing I plan to do
I'll start with small examples where I know the answer, to check ordinary cases. After that I'll add cases for mismatched array sizes, division by zero, square roots of negative numbers, overflow, NaN and infinity.

## Dependencies and challenges
My module relies on the whole group using consistent interfaces, naming, namespaces and error conventions. The build configuration also has to include my new source and test files.

## Next steps for Week 3
I'll finish and review the numerical logic, extend the tests to boundary cases, and check that my module works with the project's shared conventions.

## Status
This report describes my implementation work and approach. I haven't included test results because I don't have test logs to back them up.