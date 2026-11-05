**Week 1: Planning and Design, Individual Progress Report**

**Group:** 22, Numerical Computing 1
**Member:** Acam Gladys Consolate
**Assigned area:** Mathematical functions

## Weekly objective
This week our group went through the assignment together and looked at how the repository is laid out. We split up the responsibilities and talked about the conventions we all need to share: the NDArray interface, indexing, shapes, error handling and tests.

## My contribution and planning
We agreed that mathematical functions should be its own element-wise module sitting on top of the shared array representation. My part covers the common arithmetic helpers and the elementary functions, and I need to make sure floating-point results are handled consistently across them.

## My module: scope and design decisions
My module will include element-wise arithmetic helpers, power, square root, absolute value, exponential, and handling of invalid input. This week I worked out what my module depends on in the shared NDArray, and we discussed naming and error-handling conventions as a group. I also planned the files I'll need: a header, an implementation file, focused tests and an example.

## Work in progress
As a group we were still settling the exact header names, function signatures, axis conventions, floating-point tolerances and how each of us builds locally with CMake. I haven't implemented my module yet, and I don't have a successful build to report for it.

## Challenges and risks
My biggest worry is that our modules won't fit together. My functions depend on us agreeing about array shape, row-major element order, indexing and how errors are reported. Numerical code also needs a clear policy for invalid inputs and for comparing floating-point values, so I want that agreed early.

## Plan for Week 2
I'll start implementing my module against the interface we agreed on and write small known-answer tests as I go. If I hit a dependency or design problem, I'll raise it with the group straight away.

## AI use
Chat GPT and Claude were used to help out in understanding my part of the project as i will implement in my upcoming reports.