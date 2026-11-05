# Week 3 — Advanced Methods and Testing

**Group:** 22 — Numerical Computing 1  
**Member:** Kasajja Isaac Kayimbazi  
**Assigned area:** Matrix operations

## Weekly objective
Extend the module beyond basic arithmetic to the numerical routines that depend on careful logic, and strengthen the tests so that both **values** and **shapes** are verified.

## Work this week
| Routine | Applies to | Purpose |
|---------|-----------|---------|
| Determinant | Square matrices | Scalar measure of invertibility |
| Inverse | Square matrices | Matrix **A⁻¹** such that **A · A⁻¹ = I** |
| Integer powers | Square matrices | **Aⁿ** by repeated multiplication |
| LU decomposition | Square matrices | Factors **A** into lower and upper triangular matrices |
| QR decomposition | Matrices | Factors **A** into an orthogonal **Q** and an upper triangular **R** |

The routines that need a square matrix check this before doing any work, in the same way multiplication checks its inner dimensions.

## Verification approach
For routines whose answer is not obvious by hand, I used identity-based checks in addition to known answers:

- **Inverse:** A · A⁻¹ should equal the identity matrix.
- **LU:** multiplying the factors back together should recover **A**.
- **QR:** Q · R should recover **A**, and Qᵀ · Q should equal the identity.
- **Powers:** Aⁿ should match repeated multiplication of **A** with itself.

Rounding is expected in these routines, so every comparison uses a documented tolerance, |a − b| ≤ ε, rather than exact equality. Tests also cover invalid inputs, such as non-square matrices passed to square-only routines and mismatched dimensions in arithmetic.

## Review
The group test plan called for known-answer tests, invalid-input checks, shape verification and a review of public headers. I reviewed my module against the shared public interface to avoid duplicate definitions and incompatible conventions at integration.

## Challenges and lessons
A correct number is not enough for multidimensional routines. Shape, axis interpretation, element order and error handling all have to be right as well, and floating-point behaviour has to be handled deliberately instead of assumed away.

## Plan for Week 4
Finish the remaining implementation, complete the module-level tests, remove any placeholders and document remaining limitations honestly before the code freeze.
