# Week 3: Advanced Methods and Testing, Individual Progress Report

**Group:** 22, Numerical Computing 1
**Member:** Acam Gladys Consolate
**Assigned area:** Mathematical functions

## Weekly objective
This week we moved on to the numerical logic behind each module, how it behaves with multidimensional arrays, edge cases, and module-level tests. We agreed that both the output shape and the numerical values have to be correct.

## Advanced work and numerical considerations
My module applies a scalar operation independently to each stored element and keeps the original shape. The functions I'm working on are power, square root, absolute value and exponential, along with element-wise addition, subtraction, multiplication and division. The rules for invalid input and domain errors need to be consistent across all of them.

### Module-specific verification
Each scalar function runs over the data buffer and preserves the shape. I need to test negative square-root inputs and our chosen NaN and infinity policy explicitly, instead of assuming every floating-point input is valid.

## Testing and review
The group's test plan called for known-answer tests, invalid-input checks, shape verification and a review of the public headers. For my module, the tests should cover the valid and invalid cases above. Floating-point comparisons should use a documented tolerance, for example |a - b| <= ε, rather than exact equality where rounding is expected.

## Challenges and lessons
Correct numbers alone aren't enough for multidimensional routines. Shape, axis interpretation, element ordering and error handling also have to be right. I need to check my module against the shared public interface so it fits in with the others without duplicate definitions or conflicting conventions.

## Plan for Week 4
I'll finish my source-code implementation, complete the module-level tests, remove any placeholders, and document any remaining limitations honestly before code freeze.

## Status
This report covers my assigned technical work and review focus. I haven't listed specific commits or test runs here, because I can't back them up with a record.