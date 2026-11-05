# Week 2 — Core Implementation

**Group:** 22 — Numerical Computing 1  
**Member:** Kasajja Isaac Kayimbazi  
**Assigned area:** Matrix operations

## Weekly objective
Move from planning into implementation: build the core matrix operations against the shared array interface, with small known-answer examples and validation of invalid inputs.

## Work this week
The module was developed as a focused C++ component, with declarations in a header and definitions in a source file. Its public functions follow the shared array conventions and reject invalid inputs before touching any data.

| Operation | Shape requirement | Result |
|-----------|------------------|--------|
| Addition / subtraction | Both operands have identical shape | Same shape as the inputs |
| Hadamard product | Both operands have identical shape | Same shape, element-wise product |
| Multiplication | **A** is *m × n*, **B** is *n × p* | *m × p* |
| Transpose | Any two-dimensional matrix | Rows and columns swapped |

### Matrix multiplication
Each output entry is a row-by-column dot product:

> C(i, j) = Σₖ A(i, k) · B(k, j)

Because the output shape differs from the input shapes, I treated multiplication as the operation most likely to hide errors. It is checked with non-square compatible matrices as well as square ones, and a mismatch between the inner dimensions is rejected before any element is read.

## Testing
Tests use small matrices with hand-checkable answers. For each operation they cover ordinary valid cases and incompatible-input cases, and they check not only the numerical values but also the **result shape**, **element order** and **error behaviour**.

## Dependencies and challenges
The module relies on the shared `NDArray` interface, the common namespace, function naming and the exception policy staying consistent. Any convention that was still open was settled with the core-array owner and the affected module members before integration.

## Plan for Week 3
Complete the more advanced numerical routines, expand the edge-case tests, and confirm that the module compiles and works with the shared array representation.
