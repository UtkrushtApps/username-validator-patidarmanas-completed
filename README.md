# Username Validator

## Task Overview

Web applications check whether a username is acceptable before creating an account. This project has a class called `UsernameValidator` with one method called `isValid` (or `is_valid` in Python). The method takes a username and returns `true` if the username is acceptable, or `false` if it is not. The method follows a set of rules about length, allowed characters, and null input. The method is already written and works correctly. There are no tests for it yet.

The starter ships the same `UsernameValidator` class in five language folders: `python/`, `javascript/`, `typescript/`, `java/`, and `cpp/`. Pick one language to work in and ignore the other four.

## Objectives

  - Start by reading the `UsernameValidator` code inside your chosen language folder.
  - Identify every different way the method behaves for different inputs.
  - Write one test for each behaviour you identify, all in the test file inside that same folder you choose.

## How to Verify

- Run the test command in your chosen language folder. Every test you wrote should pass against the existing implementation.
- Each test should check what the method returns (or what it does with bad input), not what happens inside the method.
- Your test suite should cover every rule from the spec — at least one test per distinct rule.

## Helpful Tips

- Look at each rule one by one. Each rule needs at least one test. Some rules (like the minimum and maximum length) need a separate test for each boundary value.
- Make sure each test name tells the reader what the test is checking (for example, `test_empty_string_returns_false` or `test_first_char_digit_returns_false`).
- Each test should follow the AAA pattern: Arrange (set up the username string), Act (call `isValid`), Assert (check that the return value is what you expect).
