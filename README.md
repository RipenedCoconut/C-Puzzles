# C-Puzzles
Solutions to simple problems emphasizing efficiency in C. This repository contains different puzzles that attempt to solve problems using only bitwise operators and constants less than 0xFF. Solutions use a few operations as possible and don't use any control structures.
## Contianed Files
**puzzles.c**: contains the puzzle functions and main program for test cases. 
**puzzles.h**: standard header file with function declarations.
**tests.c**: test cases for unit testing puzzles.

## What Puzzles?
### int logicalShift(int x, int n);
Perform a logical right shift on a signed interger value.
### int bitParity(int x);
Counts the number of zeros and returns 1 if the count is odd.
### int bang(int x);
Returns bang x without using the ! operator.
### int isPositive(int x);
Returns whether signed int x is positive, but use bitwise operators.
### int isLessOrEqual(int x, int y);
Returns whether x is less than or equal to y.
### int fitsBits(int x, int n);
Returns whether the value x fit into n number of bits.
### int divpwr2(int x, int n);
Returns the value of x divided by 2 raised to the n-th power.
### int negate(int x);
Returns the value of -x _without_ using negation or subtraction.
### int tmax();
Returns the largest integer that can be stored as a signed integer.
