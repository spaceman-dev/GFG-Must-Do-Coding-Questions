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

## 5. Find all four sum numbers:
    Given an array of integers and another number. Find all the unique quadruple from the given array that sums up to the given number.
    Example 1:
    Input: N = 5, K = 3, A[] = {0,0,2,1,1}
    Output: 0 0 1 2 $
    Explanation: Sum of 0, 0, 1, 2 is equal to K.

## 6. Swapping Pairs makes equal sum:
    Given two arrays of integers A[] and B[] of size N and M, the task is to check if a pair of values (one value from each array) exists such that swapping the elements of the pair will make the sum of two arrays equal.
    Example 1:
    Input: N = 6, M = 4, A[] = {4, 1, 2, 1, 1, 2}, B[] = (3, 6, 3, 3)
    Output: 1
    Explanation: Sum of elements in A[] = 11, Sum of elements in B[] = 15, To get same sum from both arrays, we can swap following values: 1 from A[] and 3 from B[]

## 7. Count distinct elements in every window:
    Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.
    Example 1:
    Input: N = 7, K = 4, A[] = {1,2,1,3,4,2,3}
    Output: 3 4 4 3
    Explanation:Window 1 of size k = 4 is 1 2 1 3. Number of distinct elements in this window are 3. 
                Window 2 of size k = 4 is 2 1 3 4. Number of distinct elements in this window are 4.
                Window 3 of size k = 4 is 1 3 4 2. Number of distinct elements in this window are 4.
                Window 4 of size k = 4 is 3 4 2 3. Number of distinct elements in this window are 3.

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

## 10. Array subset of another array:
    Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.
    Example 1:
    Input: a1[] = {11, 1, 13, 21, 3, 7}, a2[] = {11, 3, 7, 1}
    Output: Yes
    Explanation: a2[] is a subset of a1[]

## 11. Find all pairs with a given sum:
    Given two unsorted arrays A of size N and B of size M of distinct elements, the task is to find all pairs from both arrays whose sum is equal to X.
    Example 1:
    Input: A[] = {1, 2, 4, 5, 7}, B[] = {5, 6, 3, 4, 8}, X = 9 
    Output: 1 8, 4 5, 5 4
    Explanation: (1, 8), (4, 5), (5, 4) are the pairs which sum to 9.

## 13. Zero Sum Subarrays:
    You are given an array arr[] of size n. Find the total count of sub-arrays having their sum equal to 0.
    Example 1:
    Input: n = 6, arr[] = {0,0,5,5,0,0}
    Output: 6
    Explanation: The 6 subarrays are [0], [0], [0], [0], [0,0], and [0,0].

## 14. Minimum indexed character:
    Given a string str and another string patt. Find the first position (considering 0-based indexing) of the character in patt that is present at the minimum index in str.
    Example 1:
    Input: str = geeksforgeeks, patt = set
    Output: 1
    Explanation: e is the character which is present in given patt "geeksforgeeks" and is first found in str "set". First Position of e in str is 1. 

## 15. Check if two arrays are equal or not:
    Given two arrays A and B of equal size N, the task is to find if given arrays are equal or not. Two arrays are said to be equal if both of them contain same set of elements, arrangements (or permutation) of elements may be different though.
    Note : If there are repetitions, then counts of repeated elements must also be same for two array to be equal.
    Example 1:
    Input:
    N = 5
    A[] = {1,2,5,4,0}
    B[] = {2,4,5,0,1}
    Output: 1
    Explanation: Both the array can be rearranged to {0,1,2,4,5}

## 16. Uncommon Characters:
    Given two strings A and B. Find the characters that are not common in the two strings. 
    Example 1:
    Input: A = geeksforgeeks, B = geeksquiz
    Output: fioqruz
    Explanation: The characters 'f', 'i', 'o', 'q', 'r', 'u','z' are either present in A or B, but not in both.
    
## 17. Smallest window in a string containing all the characters of another string
    Given two strings S and P. Find the smallest window in the string S consisting of all the characters(including duplicates) of the string P.  Return "-1" in case there is no such window present. In case there are multiple such windows of same length, return the one with the least starting index. 
    Example 1:
    Input:
    S = "timetopractice"
    P = "toc"
    Output: toprac
    Explanation: "toprac" is the smallest substring in which "toc" can be found.

## 18. First Element to occur K times:
    Given an array of N integers. Find the first element that occurs K number of times. 
    Example 1:
    Input :
    N = 7, K = 2
    A[] = {1, 7, 4, 3, 4, 8, 7}
    Output : 4
    Explanation: Both 7 and 4 occur 2 times. But 4 is first that occurs 2 times.

## 19. Check if frequencies can be equal:
    Given a string s which contains only lower alphabetic characters, check if it is possible to remove at most one character from this string in such a way that frequency of each distinct character becomes same in the string.
    Example 1:
    Input: s = xyyz
    Output: 1 
    Explanation: Removing one 'y' will make frequency of each letter 1.