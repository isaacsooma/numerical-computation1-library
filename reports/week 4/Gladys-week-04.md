# Week 4 — Code Completion and Feature Freeze — Individual Progress Report

**Group:** 22 — Numerical Computing 1  
**Member:** Acam Gladys Consolate  
**Assigned area:** Mathematical functions

## Weekly objective
This was the final coding and feature-freeze week. Assigned functions, definitions, validation, examples and tests were to be completed; remaining gaps had to be documented rather than described as finished.

## Final coding responsibilities
The reviewed repository contains power, square root, absolute value and exponential functions. The review marks the module present but records edge-case gaps: square root rejects negative values, while NaN/infinity handling is not consistently enforced by all four operations. Tests should include ordinary positive/negative values where valid, zero, negative square-root inputs, overflow, NaN and infinity according to the documented policy.

## Completion review against the supplied project
Reviewed status: power, square root, absolute value and exponential are present, but NaN/infinity handling is not consistent across all functions.

## Quality checks required before feature freeze
- Confirm every public declaration has a matching definition.
- Check header includes, source-file registration in CMake and duplicate definitions.
- Build from a clean build directory and run the relevant tests and examples.
- Verify invalid-input behaviour and exception types.
- Update usage examples and document known limitations.
- Record unfinished requirements with the affected function and evidence; do not label them complete.

## Challenges and outstanding points
Apply each scalar function over the data buffer while preserving shape. Explicitly test negative square-root inputs and the chosen NaN/infinity policy rather than assuming all floating-point inputs are valid.

## Handover to Week 5
Provide the module's final source, header, tests/examples and a short contribution summary. Explain any known limitations to the integration team so the merge can be validated against the actual behaviour.

## Status qualification
The completion status above is based on the supplied reviewed project snapshot and its assignment-coverage cross-check. It is not a claim that this member personally ran every test or completed every checklist item. Outstanding items remain explicitly identified for honest reporting.
