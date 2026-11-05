# Week 3 — Advanced Methods and Testing — Individual Progress Report

**Group:** 22 — Numerical Computing 1  
**Member:** Kirungi Ryan Ahaisibwe  
**Assigned area:** Core N-dimensional arrays and statistical operations

## Weekly objective
The focus shifted to the numerical logic behind each module, multidimensional behaviour, edge cases and module-level tests. Correct output shape and numerical values both mattered.

## Advanced work and numerical considerations
The core representation needs a shape and flattened data buffer. Construction must ensure that the number of stored values agrees with the product of the dimensions. Shape, rank and size metadata, row-major element order and coordinate access form the common contract used by indexing, reductions, broadcasting and matrix routines.

### Module-specific verification
A key statistical decision is whether standard deviation is population or sample. The reviewed implementation uses population standard deviation. Correlation requires equal-length inputs and is undefined for zero-variance data; the reviewed code now throws a domain error for that case. Quantile and percentile must use a stated interpolation convention.

## Testing and review
The group-wide test plan called for known-answer tests, invalid-input checks, shape verification and review of public headers. For this module, tests should cover the valid and invalid cases described above. Floating-point comparisons should use a documented tolerance, for example |a-b| ≤ ε, rather than relying on exact equality where rounding is expected.

## Challenges and lessons
Correct numerical values alone are insufficient for multidimensional routines: shape, axis interpretation, ordering and error handling must also be correct. The module should be reviewed against the shared public interface so it can be integrated without duplicate definitions or incompatible conventions.

## Plan for Week 4
Finish assigned source-code implementation, complete module-level tests, remove placeholders and document any remaining limitation honestly before the code-freeze point.

## Status qualification
The reviewed source snapshot provides evidence of module coverage and limitations, but not a per-person commit log. This report records the assigned technical work and review focus without attributing undocumented commits or test runs to an individual.
