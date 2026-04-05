# Sum and Dot Product of Two Arrays

## Problem

Write a program to read two static arrays of `N` integers, where `N` is at most `100`, then determine:

- the sum of the two arrays
- the dot product of the two arrays

The sum of two arrays is obtained by adding the corresponding elements:

```text
sum[i] = array1[i] + array2[i]
```

The dot product is obtained by:

```text
array1[0] * array2[0] + array1[1] * array2[1] + ... + array1[N - 1] * array2[N - 1]
```

The program must check that `N` is between `1` and `100` before reading the arrays.

## Example

Input:

```text
4
1 2 3 4
5 6 7 8
```

Output:

```text
Sum array = 6 8 10 12
Dot product = 70
```
