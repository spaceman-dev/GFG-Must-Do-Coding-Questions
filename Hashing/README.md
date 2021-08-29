# Hashing

## 1. Relative Sorting:
    Given two integer arrays A1[ ] and A2[ ] of size N and M respectively. Sort the first array A1[ ] such that all the relative positions of the elements in the first array are the same as the elements in the second array A2[ ].
    Note: If elements are repeated in the second array, consider their first occurance only.
    Example 1: 
    Input: N = 11 M = 4
    A1[] = {2, 1, 2, 5, 7, 1, 9, 3, 6, 8, 8}
    A2[] = {2, 1, 8, 3}
    Output: 2 2 1 1 8 8 3 5 6 7 9
    Explanation: Array elements of A1[] are sorted according to A2[]. So 2 comes first then 1 comes, then comes 8, then finally 3 comes, now we append remaining elements in sorted order.

## 2. Sorting Elements of array by frequency:
    Given an array A[] of integers, sort the array according to frequency of elements. That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.
    Input: The first line of input contains an integer T denoting the number of test cases. The description of T test cases follows. The first line of each test case contains a single integer N denoting the size of array. The second line contains N space-separated integers A1, A2, ..., AN denoting the elements of the array.
    Output: For each testcase, in a new line, print each sorted array in a seperate line. For each array its numbers should be seperated by space.
    Constraints: 1 ≤ T ≤ 70, 30 ≤ N ≤ 130, 1 ≤ Ai ≤ 60 
    Example:
    Input:
        2
        5
        5 5 4 6 4
        5
        9 9 9 2 5
    Output:
        4 4 5 5 6
        9 9 9 2 5
    Explanation:
        Testcase1: The highest frequency here is 2. Both 5 and 4 have that frequency. Now since the frequencies are same then smaller element comes first. So 4 4 comes first then comes 5 5. Finally comes 6. The output is 4 4 5 5 6.
        Testcase2: The highest frequency here is 3. The element 9 has the highest frequency. So 9 9 9 comes first. Now both 2 and 5 have same frequency. So we print smaller element first. The output is 9 9 9 2 5.
    
## 3. Largest Subarray with 0 Sum:
    Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.
    Example 1:
    Input: N = 8, A[] = {15,-2,2,-8,1,7,10,23}
    Output: 5
    Explanation: The largest subarray with sum 0 will be -2 2 -8 1 7.

## 4. Common Elements:
    Given two lists V1 and V2 of sizes n and m respectively. Return the list of elements common to both the lists and return the list in sorted order. Duplicates may be there in the output list.
    Example:
    Input: n = 5, v1[] = {3, 4, 2, 2, 4}, m = 4, v2[] = {3, 2, 2, 7}
    Output: 2 2 3
    Explanation: The common elements in sorted order are {2 2 3}

## 8. Array Pair Sum Divisibility Problem:
    Given an array of integers and a number k, write a function that returns true if given array can be divided into pairs such that sum of every pair is divisible by k.
    Example 1 : 
    Input : arr = [9, 5, 7, 3], k = 6
    Output: True
    Explanation: {(9, 3), (5, 7)} is a possible solution. 9 + 3 = 12 is divisible by 6 and 7 + 5 = 12 is also divisible by 6.

## 9. Longest consecutive subsequence:
    Given an array of positive integers. Find the length of the longest sub-sequence such that elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
    Example 1:
    Input: N = 7, a[] = {2,6,1,9,4,5,3}
    Output: 6
    Explanation: The consecutive numbers here are 1, 2, 3, 4, 5, 6. These 6 numbers form the longest consecutive subsquence.

## 13. Zero Sum Subarrays:
    You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.
    Example 1:
    Input: n = 6, arr[] = {0,0,5,5,0,0}
    Output: 6
    Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].