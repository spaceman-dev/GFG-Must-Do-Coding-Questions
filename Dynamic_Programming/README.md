# Dynamic Programming

## 1. Minimum Operations:
    Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available: Double the number, Add one to the number
    Example 1:
    Input: N = 8 
    Output: 4 
    Explanation: 0 + 1 = 1, 1 + 1 = 2, 2 * 2 = 4, 4 * 2 = 8

## 2. Max Length Chain (Greedy approach is better):
    You are given N pairs of numbers. In every pair, the first number is always smaller than the second number. A pair (c, d) can follow another pair (a, b) if b < c. Chain of pairs can be formed in this fashion. You have to find the longest chain which can be formed from the given set of pairs. 
    Example 1:
    Input: N = 5, P[] = {5  24 , 39 60 , 15 28 , 27 40 , 50 90}
    Output: 3
    Explanation: The given pairs are { {5, 24}, {39, 60}, {15, 28}, {27, 40}, {50, 90} },the longest chain that can be formed is of length 3, and the chain is {{5, 24}, {27, 40}, {50, 90}}

## 3. Minimum Number of Coins (Greedy):
    Given an infinite supply of each denomination of Indian currency { 1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 } and a target value N. Find the minimum number of coins and/or notes needed to make the change for Rs N.
    Example 1:
    Input: N = 43 
    Output: 20 20 2 1
    Explaination: Minimum number of coins and notes needed to make 43. 

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

## 13. Box Stacking:
    You are given a set of N types of rectangular 3-D boxes, where the ith box has height h, width w and length l. You task is to create a stack of boxes which is as tall as possible, but you can only stack a box on top of another box if the dimensions of the 2-D base of the lower box are each strictly larger than those of the 2-D base of the higher box. Of course, you can rotate a box so that any side functions as its base.It is also allowable to use multiple instances of the same type of box. You task is to complete the function maxHeight which returns the height of the highest possible stack so formed.
    Note: Base of the lower box should be strictly larger than that of the new box we're going to place. This is in terms of both length and width, not just in terms of area. So, two boxes with same base cannot be placed one over the other.
    Example 1:
    Input:
    n = 4
    height[] = {4,1,4,10}
    width[] = {6,2,5,12}
    length[] = {7,3,6,32}
    Output: 60
    Explanation: One way of placing the boxes is as follows in the bottom to top manner: (Denoting the boxes in (l, w, h) manner)
                    (12, 32, 10) (10, 12, 32) (6, 7, 4) 
                    (5, 6, 4) (4, 5, 6) (2, 3, 1) (1, 2, 3)
                Hence, the total height of this stack is 10 + 32 + 4 + 4 + 6 + 1 + 3 = 60. No other combination of boxes produces a height greater than this.

## 14. Maximize Cut Segments (Rod Cutting):
    Given an integer N denoting the Length of a line segment. You need to cut the line segment in such a way that the cut length of a line segment each time is either x , y or z. Here x, y, and z are integers. After performing all the cut operations, your total number of cut segments must be maximum.
    Example 1:
    Input: N = 4, x = 2, y = 1, z = 1
    Output: 4
    Explanation: Total length is 4, and the cut lengths are 2, 1 and 1.  We can make maximum 4 segments each of length 1.

## 15. Longest Path in Matrix:
    Given a n*n matrix where all numbers are distinct, find the maximum length path (starting from any cell) such that all cells along the path are in increasing order with a difference of 1. 
    We can move in 4 directions from a given cell (i, j), i.e., we can move to (i+1, j) or (i, j+1) or (i-1, j) or (i, j-1) with the condition that the adjacent cells have a difference of 1.
    Example 1: 
    Input:  mat[][] = {{1, 2, 9}
                        {5, 3, 8}
                        {4, 6, 7}}
    Output: 4
    The longest path is 6-7-8-9. 
## 16. Minimum Sum Partition:
    Given an integer array arr of size N, the task is to divide it into two sets S1 and S2 such that the absolute difference between their sums is minimum and find the minimum difference
    Example 1:
    Input: N = 4, arr[] = {1, 6, 11, 5} 
    Output: 1
    Explanation: Subset1 = {1, 5, 6}, sum of Subset1 = 12 Subset2 = {11}, sum of Subset2 = 11   

## 17. Count Number of Hops:
    A frog jumps either 1, 2, or 3 steps to go to the top. In how many ways can it reach the top. As the answer will be large find the answer modulo 1000000007.
    Example 1:
    Input: N = 4
    Output: 7
    Explanation:Below are the 7 ways to reach 4
                1 step + 1 step + 1 step + 1 step 
                1 step + 2 step + 1 step 
                2 step + 1 step + 1 step 
                1 step + 1 step + 2 step
                2 step + 2 step
                3 step + 1 step
                1 step + 3 step

## 18. Egg Dropping Puzzle (MCM similar):
    You are given N identical eggs and you have access to a K-floored building from 1 to K.
    There exists a floor f where 0 <= f <= K such that any egg dropped at a floor higher than f will break, and any egg dropped at or below floor f will not break. There are few rules given below. 
    An egg that survives a fall can be used again.
    A broken egg must be discarded.
    The effect of a fall is the same for all eggs.
    If the egg doesn't break at a certain floor, it will not break at any floor below.
    If the eggs breaks at a certain floor, it will break at any floor above.
    Return the minimum number of moves that you need to determine with certainty what the value of f is.
    Example 1:
    Input: N = 1, K = 2
    Output: 2
    Explanation: 
            - Drop the egg from floor 1. If it breaks, we know that f = 0.
            - Otherwise, drop the egg from floor 2. If it breaks, we know that f = 1.
            - If it does not break, then we know f = 2.
            - Hence, we need at minimum 2 moves to determine with certainty what the value of f is.
## 19. Optimal Strategy For a Game:
    You are given an array A of size N. The array contains integers and is of even length. The elements of the array represent N coin of values V1, V2, ....Vn. You play against an opponent in an alternating way.
    In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin.
    You need to determine the maximum possible amount of money you can win if you go first.
    Note: Both the players are playing optimally.
    Example 1:
    Input: N = 4, A[] = {5,3,7,10}
    Output: 15
    Explanation: The user collects maximum value as 15(10 + 5)

## 20. Shortest Common Supersequence:
    Given two strings X and Y of lengths m and n respectively, find the length of the smallest string which has both, X and Y as its sub-sequences. Note: X and Y can have both uppercase and lowercase letters.
    Example 1
    Input: X = abcd, Y = xycd
    Output: 6
    Explanation: Shortest Common Supersequence would be abxycd which is of length 6 and has both the strings as its subsequences.
