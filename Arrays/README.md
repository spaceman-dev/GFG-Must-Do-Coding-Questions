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

## 7. Number of Pairs:
    Given two arrays X and Y of positive integers, find the number of pairs such that x^y > y^x (raised to power of) where x is an element from X and y is an element from Y.
    Example 1:
    Input: 
    M = 3, X[] = [2 1 6] 
    N = 2, Y[] = [1 5]
    Output: 3
    Explanation: The pairs which follow x^y > y^x are as such: 2^1 > 1^2,  2^5 > 5^2 and 6^1 > 1^6 .

## 8. Inversion of an array:
    Given an array of integers. Find the Inversion Count in the array. Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then the inversion count is 0. If an array is sorted in the reverse order then the inversion count is the maximum. Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.  
    Example 1:
    Input: N = 5, arr[] = {2, 4, 1, 3, 5}
    Output: 3
    Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).  

## 9. Sort an array of 0s, 1s and 2s:
    Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.
    Example 1:
    Input: 
    N = 5
    arr[]= {0 2 1 2 0}
    Output: 0 0 1 2 2
    Explanation: 0s 1s and 2s are segregated into ascending order.

## 10. Equilibrium Point:
    Given an array A of n positive numbers. The task is to find the first Equilibium Point in the array. 
    Equilibrium Point in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
    Example 1:
    Input:
    n = 1
    A[] = {1}
    Output: 1
    Explanation: Since its the only element hence its the only equilibrium point. 

## 11. Leaders in an array:
    Given an array A of positive integers. Your task is to find the leaders in the array. An element of array is leader if it is greater than or equal to all the elements to its right side. The rightmost element is always a leader. 
    Example 1:
    Input:
    n = 6
    A[] = {16,17,4,3,5,2}
    Output: 17 5 2
    Explanation: The first leader is 17 as it is greater than all the elements to its right. Similarly, the next leader is 5. The right most element is always a leader so it is also included.

## 12. Minimum Platforms:
    Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting. Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.
    Example 1:
    Input: n = 6 
    arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
    dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
    Output: 3
    Explanation: 
    Minimum 3 platforms are required to safely arrive and depart all trains.

## 13. Reverse array in groups:
    Given an array arr[] of positive integers of size N. Reverse every sub-array group of size K.
    Example 1:
    Input: N = 5, K = 3, arr[] = {1,2,3,4,5}
    Output: 3 2 1 5 4
    Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.

## 14. Kth smallest element in an array:
    Given an array arr[] and a number K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
    Example 1:
    Input:
    N = 6
    arr[] = 7 10 4 3 20 15
    K = 3
    Output : 7
    Explanation : 3rd smallest element in the given array is 7.

## 15. Trapping Rain Water:
    Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
    Example 1:
    Input:
    N = 4
    arr[] = {7,4,0,9}
    Output: 10
    Explanation: Water trapped by above block of height 4 is 3 units and above block of height 0 is 7 units. So, the total unit of water trapped is 10 units.

## 16. Pythagorean Triplet:
    Given an array arr of N integers, write a function that returns true if there is a triplet (a, b, c) that satisfies a2 + b2 = c2, otherwise false.
    Example 1:
    Input: N = 5, Arr[] = {3, 2, 4, 6, 5}
    Output: Yes
    Explanation: a=3, b=4, and c=5 forms a pythagorean triplet.

## 17. Chocolate distribution problem:
    Given an array A[ ] of positive integers of size N, where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are M students, the task is to distribute chocolate packets among M students such that :
    Each student gets exactly one packet.
    The difference between maximum number of chocolates given to a student and minimum number of chocolates given to a student is minimum.
    Example 1:
    Input:
    N = 8, M = 5
    A = {3, 4, 1, 9, 56, 7, 9, 12}
    Output: 6
    Explanation: The minimum difference between maximum chocolates and minimum chocolates is 9 - 3 = 6 by choosing following M packets :{3, 4, 9, 7, 9}.

## 18. Stock Buy and Sell:
    The cost of stock on each day is given in an array A[] of size N. Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
    Note: There may be multiple possible solutions. Return any one of them. Any correct solution will result in an output of 1, whereas wrong solutions will result in an output of 0.
    Example 1:
    Input:
    N = 7
    A[] = {100,180,260,310,40,535,695}
    Output: 1
    Explanation: One possible solution is (0 3) (4 6) We can buy stock on day 0, and sell it on 3rd day, which will give us maximum profit. Now, we buy stock on day 4 and sell it on day 6.

## 19. Element with left side smaller and right side greater:
    Given an unsorted array of size N. Find the first element in array such that all of its left elements are smaller and all right elements to it are greater than it.
    Note: Left and right side elements can be equal to required element. And extreme elements cannot be required element.
    Example 1:
    Input:  
    N = 4
    A[] = {4, 2, 5, 7}
    Output: 5
    Explanation: Elements on left of 5 are smaller than 5 and on right of it are greater than 5.

## 20. Convert array into zig-zag fashion:
    Given an array Arr (distinct elements) of size N. Rearrange the elements of array in zig-zag fashion. The converted array should be in form a < b > c < d > e < f. The relative order of elements is same in the output i.e you have to iterate on the original array only.
    Example 1:
    Input:
    N = 7
    Arr[] = {4, 3, 7, 8, 6, 2, 1}
    Output: 3 7 4 8 2 6 1
    Explanation: 3 < 7 > 4 < 8 > 2 < 6 > 1

## 21. Last Index of One:
    Given a string S consisting only '0's and '1's,  find the last index of the '1' present in it.
    Example 1:
    Input: S = 00001
    Output: 4
    Explanation: Last index of  1 in given string is 4.

## 22. Spirally traversing a matrix:
    Given a matrix of size r*c. Traverse the matrix in spiral form.
    Example 1:
    Input:
    r = 4, c = 4
    matrix[][] = {{1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15,16}}
    Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10

## 23. Largest number formed from an array:
    Given a list of non negative integers, arrange them in such a manner that they form the largest number possible.The result is going to be very large, hence return the result in the form of a string.
    Example 1:
    Input: 
    N = 5
    Arr[] = {3, 30, 34, 5, 9}
    Output: 9534330
    Explanation: Given numbers are {3, 30, 34, 5, 9}, the arrangement 9534330 gives the largest value.