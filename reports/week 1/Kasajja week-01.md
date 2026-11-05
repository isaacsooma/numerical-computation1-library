# Week 1 — Planning and Design

**Group:** 22 — Numerical Computing 1  
**Member:** Kasajja Isaac Kayimbazi  
**Assigned area:** Matrix operations

## Weekly objective
Understand the assignment, study the repository structure, agree the division of work within the group, and settle the conventions the modules would share: the `NDArray` interface, indexing, shapes, error handling and testing.

## Starting point
The group began with statistics. Members wrote individual statistical programs and declarations, and at the end of the week the library had not yet been compiled or tested as a whole. The final allocation then assigned me the **matrix operations** module, which complements Hamza's vector and linear-algebra work.

## Module scope
| Group | Operations |
|-------|-----------|
| Arithmetic | Addition, subtraction, multiplication |
| Transformations | Transpose and related matrix transformations |

## Design decisions
- **Shared representation.** Matrix functions build on the common `NDArray` rather than defining a separate matrix type, so results can be passed freely between modules.
- **Validate first.** Dimensions are checked before any data is accessed, so an incompatible call fails cleanly instead of reading out of range.
- **Multiplication rule.** For an *m × n* matrix **A** and an *n × p* matrix **B**, the product is *m × p*, and each entry is the dot product of a row of **A** with a column of **B**. Incompatible inner dimensions are rejected.
- **Consistent errors.** Invalid input is reported through exceptions, following the policy agreed with the group.
- **Floating-point comparison.** Tests compare values within a tolerance ε instead of using exact equality.
- **Planned layout.** A header for declarations, a source file for definitions, focused tests and a short usage example.

## Challenges and risks
The main risk was an interface mismatch between modules. My work depends on the group agreeing on array shape, row-major element order, indexing and error behaviour, and on consistent policies for invalid input and floating-point comparison. Header names, function signatures, axis conventions and local CMake builds were still being finalised at the end of the week.

## Plan for Week 2
Start implementing the module against the agreed interface, add small known-answer tests, and raise any dependency or design issue with the core-array owner early.
