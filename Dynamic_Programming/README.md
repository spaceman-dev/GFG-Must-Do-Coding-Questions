# Dynamic Programming

## 4. Longest Common Substring:
    Given two strings. The task is to find the length of the longest common substring.
    Example 1:
    Input: S1 = "ABCDGH", S2 = "ACDGHR"
    Output: 4
    Explanation: The longest common substring is "CDGH" which has length 4.

## 5. Longest Increasing Subsequence:
    Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.
    Example 1:
    Input:
    N = 16
    A[]={0,8,4,12,2,10,6,14,1,9,5,13,3,11,7,15}
    Output: 6 
    Explanation:Longest increasing subsequence 0 2 6 9 13 15, which has length 6

## 6. Longest Common Subsequence:
    Given two sequences, find the length of longest subsequence present in both of them. Both the strings are of uppercase.
    Example 1:
    Input:
    A = 6, B = 6, str1 = ABCDGH, str2 = AEDFHR
    Output: 3
    Explanation: LCS for input Sequences “ABCDGH” and “AEDFHR” is “ADH” of length 3.

## 7. 0-1 Knapsack Problem:
    You are given weights and values of N items, put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
    In other words, given two integer arrays val[0..N-1] and wt[0..N-1] which represent values and weights associated with N items respectively. Also given an integer W which represents knapsack capacity, find out the maximum value subset of val[] such that sum of the weights of this subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don’t pick it (0-1 property).
    Example 1:
    Input:
    N = 3
    W = 4
    values[] = {1,2,3}
    weight[] = {4,5,1}
    Output: 3

## 8. Maximum Sum Increasing Subsequence:
    Given an array arr of N positive integers, the task is to find the maximum sum increasing subsequence of the given array.
    Example 1:
    Input: N = 5, arr[] = {1, 101, 2, 3, 100}   
    Output: 106
    Explanation:The maximum sum of a increasing sequence is obtained from {1, 2, 3, 100}

## 9. Minimum Number of Jumps:
    Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
    Note: Return -1 if you can't reach the end of the array.
    Example 1: 
    Input: N = 11 arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9} 
    Output: 3 
    Explanation: First jump from 1st element to 2nd element with value 3. Now, from here we jump to 5th element with value 9, and from here we will jump to last. 
