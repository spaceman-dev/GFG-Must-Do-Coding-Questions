# Arrays
## 1. Subarray With Given Sum: 
    Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.  
    Example 1:  
    Input:  
    N = 5, S = 12  
    A[] = {1,2,3,7,5}
    Output: 2 4  
    Explanation: The sum of elements from 2nd position to 4th position is 12.  

## 2. Count the triplets:
    Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.  
    Example 1:  
    Input:  
    N = 4  
    arr[] = {1, 5, 3, 2}  
    Output: 2  
    Explanation: There are 2 triplets: 1 + 2 = 3 and 3 + 2 = 5   

## 3. Kadane's Algorithm:
    Given an array arr of N integers. Find the contiguous sub-array with maximum sum.  
    Example 1:
    Input:
    N = 5
    arr[] = {1,2,3,-2,5}
    Output: 9
    Explanation:
    Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.  

## 4. Missing Number in array:
    Given an array of size N-1 such that it only contains distinct integers in the range of 1 to N. Find the missing element.
    Example 1:
    Input:
    N = 5
    A[] = {1,2,3,5}
    Output: 4

## 5. Merge without extra space:
    Given two sorted arrays arr1[] and arr2[] of sizes n and m in non-decreasing order. Merge them in sorted order without using any extra space. Modify arr1 so that it contains the first N elements and modify arr2 so that it contains the last M elements.
    Example 1:
    Input: 
    n = 4, arr1[] = [1 3 5 7] 
    m = 5, arr2[] = [0 2 6 8 9]
    Output: 
    arr1[] = [0 1 2 3]
    arr2[] = [5 6 7 8 9]
    Explanation: After merging the two non-decreasing arrays, we get, 0 1 2 3 5 6 7 8 9.

## 6. Rearrange array alternately:
    Given a sorted array of positive integers. Your task is to rearrange  the array elements alternatively i.e first element should be max value, second should be min value, third should be second max, fourth should be second min and so on.
    Example 1:
    Input:
    N = 6
    arr[] = {1,2,3,4,5,6}
    Output: 6 1 5 2 4 3
    Explanation: Max element = 6, min = 1, second max = 5, second min = 2, and so on... Modified array is : 6 1 5 2 4 3.

## 8. Inversion of an array:
    Given an array of integers. Find the Inversion Count in the array. Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.  
    Example 1:
    Input: N = 5, arr[] = {2, 4, 1, 3, 5}
    Output: 3
    Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).