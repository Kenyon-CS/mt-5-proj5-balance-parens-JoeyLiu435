[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/YuLDpDxo)
# Project 5 — Recursive Balanced Parentheses Checker (C++)

## Overview
Finish a recursive function that checks whether a string’s parentheses are balanced. Ignore all non-paren characters.

**Learning goals**
- Recursive design
- Prefix property (never close more than opened)
- Base conditions and parameter threading

## Files
```
include/balance.hpp   # API
src/balance.cpp       # your changes here (finish is_balanced_rec)
tests/tests.cpp       # unit tests
Makefile
```

## Specification
- Only `(` and `)` matter; other characters are ignored.
- Prefix rule: at no point may `)` exceed `(`.
- At the end, the number of opens must be exactly closed.

## Your task
Complete the helper and keep the wrapper `is_balanced(s)`:
is_balanced_rec(s,idx,open)
1. s is the entire string
2. idx is the current index
3. open is the count of open parenthesis at this point.
So for the string "((()()))" when you are at the 5th character:
```
   is_balanced_rec("((()()))",5,4)
```
we have 4 open "(" for s[0:4], and s[5] is ")", so the 4 will be decemented in the recursive call.
So what you will do is is_balanced_rec(s,idx,open) will call is_balanced_rec(s,idx+1,n), where n is open - 1 or open + 1 (if s[idx] is a parenthesis, or open is it is not.


#Sample expectations:
- `""` → balanced
- `"()"`, `"(())"` → balanced
- `")("`, `"(()"`, `"())(()"` → not balanced
- `"(a)(b)"` → balanced (ignores letters)

## Build, Test, and Submit

### 1) Build & test locally
```bash
make
make test
```

### 2) Submit:
- Commit & push to trigger autograding (Actions tab shows logs).
```bash
make submit
```

### 3) Submit to GitHub Classroom
```bash
git add -A
git commit -m "submit"
git push
```

## What we test
- Correct handling of empty, simple, and mixed strings
- Proper ignore of non-paren characters
- Straight recursion is fine
