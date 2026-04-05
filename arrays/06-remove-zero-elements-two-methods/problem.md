# Remove Zero Elements Using Two Methods

## Problem

Write a program to read `N` integers into a static array of maximum size `100`, then remove all zero elements using two methods:

- Method 1: whenever a zero is found, shift the remaining elements one position to the left
- Method 2: use one pass with two indices, where `j` scans the original array and `i` stores the non-zero values in the new array

The program must display the resulting array for both methods.

If all elements are zero, display `Empty array`.

The program must check that `N` is between `1` and `100` before reading the array.

## Example

Input:

```text
7
0 5 0 -2 3 0 4
```

Output:

```text
Method 1 = 5 -2 3 4
Method 2 = 5 -2 3 4
```
