# Week 1 — Planning and Design — Individual Progress Report

**Group:** 22 — Numerical Computing 1  
**Member:** Kirungi Ryan Ahaisibwe  
**Assigned area:** Core N-dimensional arrays and statistical operations

## Weekly objective
The group reviewed the assignment, inspected the repository structure, divided responsibilities and discussed shared conventions for the NDArray interface, indexing, shapes, errors and tests.

## Individual contribution and planning
The group initially chose statistics as a manageable starting point because members were familiar with the concepts. The original first-week note records that members wrote individual statistics programs and declarations, while the final allocation identifies Kirungi as the owner of the NDArray core and confirms that the statistical operations had already been completed by this member. The core-array responsibility therefore became the foundation for the other modules.

## Assigned module: scope and design decisions
NDArray core, multidimensional shape/storage, element access, and completed statistics. The first-week design work was to identify dependencies on the shared NDArray, agree on naming and error-handling conventions, and plan a header, implementation file, focused tests and example for the module.

## Work in progress
The group was still finalising exact header names, function signatures, axis conventions, floating-point tolerances and local CMake builds. No module-specific implementation or successful build is claimed here unless supported by the original first-week note.

## Challenges and risks
The main risk was interface mismatch between modules. This member's work depends on agreement about array shape, row-major element order, indexing and error behaviour. Numerical functions also require consistent policies for invalid inputs and floating-point comparisons.

## Plan for Week 2
Begin implementing the assigned module against the agreed interface, add small known-answer tests and report any dependency or design issue early.

## Evidence and reporting note
The original Week 1 group note says the team began with statistics, with individual statistical programs and declarations written by members; it also says the library had not yet been compiled or tested at that point. The final allocation identifies the module ownership shown above. This report distinguishes that early group activity from later module-specific work.
