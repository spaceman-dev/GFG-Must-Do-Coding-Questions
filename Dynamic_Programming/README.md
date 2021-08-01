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

## 10. Edit Distance:   
    Given two strings s and t. Find the minimum number of operations that need to be performed on str1 to convert it to str2. The possible operations are: Insert, Remove, Replace.
    Example 1:
    Input: s = "geek", t = "gesek"
    Output: 1 
    Explanation: One operation is required inserting 's' between two 'e's of str1.

## 11. Coin Change:
    Given a value N, find the number of ways to make change for N cents, if we have infinite supply of each of S = { S1, S2, .. , SM } valued coins.
    Example 1:
    Input: n = 4 , m = 3, S[] = {1,2,3}
    Output: 4 
    Explanation: Four Possible ways are: {1,1,1,1},{1,1,2},{2,2},{1,3}.

## 12. Partition Equal Subset Sum:
    Given an array arr[] of size N, check if it can be partitioned into two parts such that the sum of elements in both parts is the same.
    Example 1:
    Input: N = 4, arr = {1, 5, 11, 5} 
    Output: YES 
    Explaination: The two parts are {1, 5, 5} and {11}.

## 14. Maximize Cut Segments (Rod Cutting):
    Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers. After performing all the cut operations, your total number of cut segments must be maximum.
    Example 1:
    Input: N = 4, x = 2, y = 1, z = 1
    Output: 4
    Explanation: Total length is 4, and the cut lengths are 2, 1 and 1.  We can make maximum 4 segments each of length 1.