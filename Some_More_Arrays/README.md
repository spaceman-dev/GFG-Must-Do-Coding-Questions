# Some more questions on Arrays

## 1. Find Missing and Repeating:
    Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array. Find these two numbers.
    Example 1:
    Input: N = 2, Arr[] = {2, 2}
    Output: 2 1
    Explanation: Repeating number is 2 and smallest positive missing number is 1.

## 2. Maximum Index:
    Given an array A[] of N positive integers. The task is to find the maximum of j - i subjected to the constraint of A[i] < A[j] and i < j.
    Example 1:
    Input: N = 2, A[] = {1, 10}
    Output: 1
    Explanation: A[0] < A[1] so (j-i) is 1-0 = 1.

## 3. Consecutive 1s not allowed:
    Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s. Output your answer modulo 10^9 + 7.
    Example 1:
    Input: N = 3
    Output: 5
    Explanation: 5 strings are (000, 001, 010, 100, 101).
