# WEEK 1 — PLANNING AND DESIGN

## INDIVIDUAL PROGRESS REPORT

**Group:** 22 – Numerical Computing 1
**Member:** Namaganda Leah Jesero
**Assigned Module:** Aggregation and Reduction Support

### 1. Weekly Objective

The main objective for Week 1 was to review the assignment requirements, inspect the project repository and establish a clear plan for developing the Numerical Computing 1 library.

The group discussed and agreed on shared conventions concerning the NDArray interface, array indexing, dimensions, error handling and testing procedures. Responsibilities were also distributed among group members to ensure effective collaboration and avoid duplication of work.

### 2. Individual Contribution and Planning

During the planning stage, the group divided the numerical computing tasks into different modules.

My assigned responsibility was Aggregation and Reduction Support. The group distinguished general aggregation and reduction operations from statistical functions already assigned to Kirungi.

This distinction was important to prevent duplication of functionality and ensure that the different modules could work together effectively.

### 3. Assigned Module: Scope and Design Decisions

My module is responsible for implementing general aggregation and reduction operations, including:

* Sum: Calculating the total of array elements.
* Count: Determining the number of elements in an array.
* Minimum: Finding the smallest element.
* Maximum: Finding the largest element.
* Axis-based reductions: Performing aggregation along specified array dimensions.

Statistical operations already implemented under Kirungi's module were excluded from my responsibilities.

The planned module structure consists of a header file (`aggregation.hpp`) containing function declarations and a source file (`aggregation.cpp`) containing the corresponding implementations.

### 4. Work in Progress

During Week 1, the group was still finalising the shared programming interface.

The following issues were under discussion:

* Finalising header and source file naming conventions.
* Agreeing on function signatures.
* Establishing axis conventions for multidimensional arrays.
* Defining floating-point comparison tolerances.
* Establishing error-handling procedures.
* Planning local CMake builds and module-specific tests.

No completed module implementation or successful build is claimed for this reporting period.

### 5. Challenges and Risks

The main challenge identified was ensuring compatibility between the different modules.

My assigned module depends on the shared NDArray implementation, particularly:

* Array dimensions and shapes.
* Row-major element storage.
* Indexing conventions.
* Consistent error-handling behaviour.

Another consideration was ensuring that numerical operations handle invalid inputs appropriately and that floating-point comparisons use consistent tolerances.

### 6. Plan for Week 2

In Week 2, I intend to:

1. Begin implementing the aggregation functions using the agreed NDArray interface.
2. Develop the `aggregation.hpp` header file.
3. Implement the functions in `aggregation.cpp`.
4. Write tests using small arrays with known expected results.
5. Test sum, count, minimum and maximum operations.
6. Implement and test axis-based reductions.
7. Report any interface inconsistencies or dependency problems to the group.

### 7. Evidence and Reporting Note

According to the original Week 1 group notes, the team initially began working on statistical operations, with individual statistical programs and declarations being written by members.

However, the library had not yet been compiled or tested at that stage.

The final allocation of responsibilities identified Aggregation and Reduction Support as my assigned module. Therefore, this report separates the group's initial activities from my specific module responsibilities and does not claim implementation work that had not yet been completed.

**Prepared by:** Namaganda Leah Jesero
**Group:** 22
**Course:** Numerical Computing 1
