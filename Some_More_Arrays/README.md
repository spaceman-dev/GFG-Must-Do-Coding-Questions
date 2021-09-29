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

## 4. Majority Element:
    Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.
    Example 1:
    Input: N = 3 , A[] = {1,2,3} 
    Output: -1
    Explanation: Since, each element in {1,2,3} appears only once so there is no majority element.

## 5. Two numbers with sum closest to zero:
    Given an integer array of N elements. You need to find the maximum sum of two elements such that sum is closest to zero.
    Example 1:
    Input: N = 3, arr[] = {-8 -66 -60}
    Output: -68
    Explanation: Sum of two elements closest to zero is -68 using numbers -60 and -8.

## 6. Nuts and Bolts Problem:
    Given a set of N nuts of different sizes and N bolts of different sizes. There is a one-one mapping between nuts and bolts. Match nuts and bolts efficiently.
    Comparison of a nut to another nut or a bolt to another bolt is not allowed. It means nut can only be compared with bolt and bolt can only be compared with nut to see which one is bigger/smaller.
    The elements should follow the following order ! # $ % & * @ ^ ~ .  
    Example 1:
    Input: 
        N = 5
        nuts[] = {@, %, $, #, ^}
        bolts[] = {%, @, #, $ ^}
    Output: 
        # $ % @ ^
        # $ % @ ^

## 7. Boolean Matrix:
    Given a boolean matrix of size RxC where each cell contains either 0 or 1, modify it such that if a matrix cell matrix[i][j] is 1 then all the cells in its ith row and jth column will become 1.
    Example 1:
    Input: R = 2, C = 2
        matrix[][] = {{1, 0}, {0, 0}}
    Output: 
        1 1
        1 0 
    Explanation: Only cell that has 1 is at (0,0) so all cells in row 0 are modified to 1 and all cells in column 0 are modified to 1.
    