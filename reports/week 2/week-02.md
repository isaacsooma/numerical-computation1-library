# Week 2 — Core Implementation — Individual Progress Report

**Group:** 22 — Numerical Computing 1  
**Member:** Kirungi Ryan Ahaisibwe  
**Assigned area:** Core N-dimensional arrays and statistical operations

## Weekly objective
The project moved from planning into implementation. Each member's assigned module was to be developed against the shared array interface, with small known-answer examples and validation of invalid inputs.

## Individual work focus
The core representation needs a shape and flattened data buffer. Construction must ensure that the number of stored values agrees with the product of the dimensions. Shape, rank and size metadata, row-major element order and coordinate access form the common contract used by indexing, reductions, broadcasting and matrix routines.

## Implementation plan and technical approach
The module was to be developed as a focused C++ component with declarations in a header and definitions in a source file. Its public functions should use the shared array conventions and reject invalid inputs before accessing data. A key statistical decision is whether standard deviation is population or sample. The reviewed implementation uses population standard deviation. Correlation requires equal-length inputs and is undefined for zero-variance data; the reviewed code now throws a domain error for that case. Quantile and percentile must use a stated interpolation convention.

## Testing planned
Use small arrays with hand-checkable expected results. Include ordinary valid cases and boundary or incompatible-input cases relevant to this module. Check not only numerical values but also result shape, element order and error behaviour where applicable.

## Dependencies and challenges
The shared NDArray interface, common namespace, function names, axis numbering and exception policy must remain consistent. Any unresolved convention should be agreed with the core-array owner and affected module members before integration.

## Next steps for Week 3
Complete the main numerical logic, expand edge-case tests, and verify that the module compiles and works with the shared array representation.

## Status qualification
The supplied weekly report describes implementation targets for the group; it does not provide individual commit history or per-member test logs. The statements above therefore describe this member's assigned work and technical approach, not an invented claim about specific commits or test execution.
