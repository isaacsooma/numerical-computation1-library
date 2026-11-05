# Week 4 — Code Completion and Feature Freeze

**Group:** 22 — Numerical Computing 1  
**Member:** Kasajja Isaac Kayimbazi  
**Assigned area:** Matrix operations

## Weekly objective
Complete the final coding, validation, examples and tests for the module ahead of the feature freeze, and document anything that remains open instead of describing it as finished.

## Final state of the module
The reviewed repository contains the full matrix scope, and the matrix test harness passes in the reviewed build.

| Area | Included |
|------|----------|
| Arithmetic | Addition, subtraction, multiplication, Hadamard product |
| Transformations | Transpose |
| Square-matrix routines | Determinant, inverse, integer powers |
| Decompositions | LU, QR |

## Verification evidence
- Products of rectangular, compatible matrices give the expected *m × p* result.
- Transposing a non-square matrix gives the correct shape and element order.
- Dimension mismatches are rejected rather than computed.
- The advanced routines are checked numerically, within a tolerance ε.

## Pre-freeze checks
These are the checks the module was held to before freezing:

- Every public declaration has a matching definition.
- Header includes and CMake source registration are correct, with no duplicate definitions.
- The project builds from a clean build directory, and the relevant tests and examples run.
- Invalid-input behaviour and exception types match the shared policy.
- Usage examples are up to date and known limitations are written down.

## Known limitations
Inverse, LU and QR operate in floating point, so results are accurate to within rounding error rather than exact. Callers should compare results using a tolerance, as the tests do.

## Handover to Week 5
For integration, the module provides its final header and source, tests and examples, and this report as a summary of my contribution. Any limitation noted above should be taken into account when the merge is validated against the module's actual behaviour.
