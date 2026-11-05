# Week 4 — Code Completion and Feature Freeze — Individual Progress Report

**Group:** 22 — Numerical Computing 1  
**Member:** Kirungi Ryan Ahaisibwe  
**Assigned area:** Core N-dimensional arrays and statistical operations

## Weekly objective
This was the final coding and feature-freeze week. Assigned functions, definitions, validation, examples and tests were to be completed; remaining gaps had to be documented rather than described as finished.

## Final coding responsibilities
The reviewed repository contains an NDArray implementation supporting one-dimensional and higher-dimensional arrays, shape, size, rank, coordinate access and reshape. Statistics include mean, median, minimum, maximum, population standard deviation, correlation, count, quantile and percentile. The review notes limitations: storage is double-only; scalar and zero-length dimensions are unsupported. Correlation now rejects zero variance. Quantile interpolation should remain explicitly documented.

## Completion review against the supplied project
Reviewed status: NDArray and statistics are mostly present. Known constraints include double-only storage and no scalar/zero-length dimensions; quantile convention should be explicit.

## Quality checks required before feature freeze
- Confirm every public declaration has a matching definition.
- Check header includes, source-file registration in CMake and duplicate definitions.
- Build from a clean build directory and run the relevant tests and examples.
- Verify invalid-input behaviour and exception types.
- Update usage examples and document known limitations.
- Record unfinished requirements with the affected function and evidence; do not label them complete.

## Challenges and outstanding points
A key statistical decision is whether standard deviation is population or sample. The reviewed implementation uses population standard deviation. Correlation requires equal-length inputs and is undefined for zero-variance data; the reviewed code now throws a domain error for that case. Quantile and percentile must use a stated interpolation convention.

## Handover to Week 5
Provide the module's final source, header, tests/examples and a short contribution summary. Explain any known limitations to the integration team so the merge can be validated against the actual behaviour.

## Status qualification
The completion status above is based on the supplied reviewed project snapshot and its assignment-coverage cross-check. It is not a claim that this member personally ran every test or completed every checklist item. Outstanding items remain explicitly identified for honest reporting.
