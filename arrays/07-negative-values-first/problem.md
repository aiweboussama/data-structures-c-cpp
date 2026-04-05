# Negative Values at the Beginning and Positive Values at the End

## Problem

Write a program to read `N` integers into a static array of maximum size `100`, then rearrange the array so that:

- the negative values are placed at the beginning
- the positive values are placed at the end

Use the following idea:

- find the index `i` of the first non-negative value
- set `j = i + 1`
- while `j` moves through the array, if `array[j]` is negative, swap `array[i]` and `array[j]`, then increment `i`

Zero values, if any, remain in the non-negative part of the array.

The program must check that `N` is between `1` and `100` before reading the array.

## Example

Input:

```text
6
4 -3 7 -1 2 -5
```

Output:

```text
Rearranged array = -3 -1 -5 4 2 7
```
