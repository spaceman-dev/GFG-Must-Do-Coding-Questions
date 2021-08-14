# Divide and Conquer

## 2. Search in a Rotated Array:
    Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.
    Example 1:
    Input: N = 9 A[] = {5, 6, 7, 8, 9, 10, 1, 2, 3} key = 10
    Output: 5
    Explanation: 10 is found at index 5.

## 4. Sum of Middle Elements of Two Sorted Arrays:
    Given 2 sorted arrays Ar1 and Ar2 of size N each. Merge the given arrays and find the sum of the two middle elements of the merged array.
    Example 1:
    Input: N = 5, Ar1[] = {1, 2, 4, 6, 10}, Ar2[] = {4, 5, 6, 9, 12}
    Output: 11
    Explanation: The merged array looks like {1,2,4,4,5,6,6,9,10,12}. Sum of middle elements is 11 (5 + 6).

## 5. Quick Sort:
    Quick Sort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. Given an array arr[], its starting position low and its ending position high.
    Implement the partition() and quickSort() functions to sort the array.
    Example 1:
    Input: N = 5, arr[] = { 4, 1, 3, 9, 7}
    Output: 1 3 4 7 9

## 6. Merge Sort:
    Given an array arr[], its starting position l and its ending position r. Sort the array using merge sort algorithm.
    Example 1:
    Input: N = 5, arr[] = {4 1 3 9 7}
    Output: 1 3 4 7 9

## 7. Kth element of two sorted arrays:
    Given two sorted arrays arr1 and arr2 of size N and M respectively and an element K. The task is to find the element that would be at the k’th position of the final sorted array.
    Example 1:
    Input: arr1[] = {2, 3, 6, 7, 9}, arr2[] = {1, 4, 8, 10}, k = 5
    Output: 6
    Explanation: The final sorted array would be - 1, 2, 3, 4, 6, 7, 8, 9, 10. The 5th element of this array is 6.
