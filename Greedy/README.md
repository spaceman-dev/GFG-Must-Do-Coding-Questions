# Greedy

## 1. Activity Selection:
    Given N activities with their start and finish day given in array start[ ] and end[ ]. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a given day.
    Note : Duration of the activity includes both starting and ending day.
    Example 1:
    Input:
    N = 2
    start[] = {2, 1}
    end[] = {2, 2}
    Output: 1
    Explanation: A person can perform only one of the given activities.  

## 2. N Meetings in one room:
    There is one meeting room in a firm. There are N meetings in the form of (start[i], end[i]) where start[i] is start time of meeting i and end[i] is finish time of meeting i. What is the maximum number of meetings that can be accommodated in the meeting room when only one meeting can be held in the meeting room at a particular time?
    Note: Start time of one chosen meeting can't be equal to the end time of the other chosen meeting.
    Example 1:
    Input:
    N = 6
    start[] = {1,3,0,5,8,5}
    end[] =  {2,4,6,7,9,9}
    Output: 4
    Explanation: Maximum four meetings can be held with given start and end timings. The meetings are - (1, 2),(3, 4), (5,7) and (8,9)

## 3. Choose and swap:
    You are given a string s of lower case english alphabets. You can choose any two characters in the string and replace all the occurences of the first character with the second character and replace all the occurences of the second character with the first character. Your aim is to find the lexicographically smallest string that can be obtained by doing this operation at most once.
    Example 1:
    Input: A = "ccad"
    Output: "aacd"
    Explanation: In ccad, we choose ‘a’ and ‘c’ and after doing the replacement operation once we get, aacd and this is the lexicographically smallest string possible.  

## 4. Maximize toys:
    Given an array arr[ ] of length N consisting cost of N toys and an integer K depicting the amount with you. Your task is to find maximum number of toys you can buy with K amount. 
    Example 1:
    Input: 
    N = 7 
    K = 50
    arr[] = {1, 12, 5, 111, 200, 1000, 10}
    Output: 4
    Explaination: The costs of the toys you can buy are 1, 12, 5 and 10.

## 5. Page Faults in LRU:
    In operating systems that use paging for memory management, page replacement algorithm is needed to decide which page needs to be replaced when the new page comes in. Whenever a new page is referred and is not present in memory, the page fault occurs and Operating System replaces one of the existing pages with a newly needed page.
    Given a sequence of pages in an array pages[] of length N and memory capacity C, find the number of page faults using Least Recently Used (LRU) Algorithm. 
    Example 1:
    Input: N = 9, C = 4
    pages = {5, 0, 1, 3, 2, 4, 1, 0, 5}
    Output: 8
    Explaination: memory allocated with 4 pages 5, 0, 1, 3: page fault = 4
                    page number 2 is required, replaces LRU 5: page fault = 4+1 = 5
                    page number 4 is required, replaces LRU 0: page fault = 5 + 1 = 6
                    page number 1 is required which is already present: page fault = 6 + 0 = 6
                    page number 0 is required which replaces LRU 1: page fault = 6 + 1 = 7
                    page number 5 is required which replaces LRU 3: page fault = 7 + 1 = 8.

## 6. Largest Number Possible:
    Given two numbers 'N' and 'S' , find the largest number that can be formed with 'N' digits and whose sum of digits should be equals to 'S'. 
    Example 1:
    Input: N = 3, S = 20
    Output: 992
    Explaination: It is the biggest number with sum of digits equals to 20.

## 7. Minimize The Heights 2:
    Given an array arr[] denoting heights of N towers and a positive integer K, you have to modify the height of each tower either by increasing or decreasing them by K only once. After modifying, height should be a non-negative integer. 
    Find out what could be the possible minimum difference of the height of shortest and longest towers after you have modified each tower. 
    Example 1:
    Input:
    K = 2, N = 4
    Arr[] = {1, 5, 8, 10}
    Output: 5
    Explanation: The array can be modified as {3, 3, 6, 8}. The difference between the largest and the smallest is 8-3 = 5.

## 8. Minimize the sop:
    You are given two arrays, A and B, of equal size N. The task is to find the minimum value of A[0] * B[0] + A[1] * B[1] +…+ A[N-1] * B[N-1], where shuffling of elements of arrays A and B is allowed.
    Example 1:
    Input:
    N = 3 
    A[] = {3, 1, 1}
    B[] = {6, 5, 4}
    Output: 23 
    Explanation: 1 * 6  + 1 * 5 + 3 * 4  = 6 + 5 + 12 = 23 is the minimum sum

## 9. Huffman Decoding - 1:
    Given a string S, implement Huffman Encoding and Decoding.
    Example 1:
    Input : abc
    Output : abc

## 10. Minimum Spanning Tree:
    Given a weighted, undirected and connected graph of V vertices and E edges. The task is to find the sum of weights of the edges of the Minimum Spanning Tree.

## 11. Shop in Candy Store:
    In a candy store, there are N different types of candies available and the prices of all the N different types of candies are provided to you. You are now provided with an attractive offer. You can buy a single candy from the store and get at most K other candies ( all are different types ) for free. Now you have to answer two questions. Firstly, you have to find what is the minimum amount of money you have to spend to buy all the N different candies. Secondly, you have to find what is the maximum amount of money you have to spend to buy all the N different candies. In both the cases you must utilize the offer i.e. you buy one candy and get K other candies for free.
    Example 1:
    Input:
    N = 4
    K = 2
    candies[] = {3 2 1 4}
    Output: 3 7 
    Explanation: As according to the offer if you buy one candy you can take at most two more for free. So in the first case, you buy the candy which costs 1 and takes candies worth 3 and 4 for free, also you buy candy worth 2 as well. So min cost : 1+2 =3. In the second case, you can buy the candy which costs 4 and takes candies worth 1 and 2 for free, also you need to buy candy worth 3 as well. So max cost : 3+4 =7.

## 12. Geek Collects Balls:
    There are two parallel roads, each containing N and M buckets, respectively. Each bucket may contain some balls. The balls in first road are given in an array a and balls in the second road in an array b. The buckets on both roads are kept in such a way that they are sorted according to the number of balls in them. Geek starts from the end of the road which has the bucket with a lower number of balls(i.e. if buckets are sorted in increasing order, then geek will start from the left side of the road).
    Geek can change the road only at a point of intersection ie- a point where buckets have the same number of balls on two roads. Help Geek collect the maximum number of balls.
    Example 1:
    Input: 
    N = 5, M = 5
    a[] = {1, 4, 5, 6, 8}
    b[] = {2, 3, 4, 6, 9}
    Output: 29
    Explanation: The optimal way to get the maximum number of balls is to start from road 2. Get 2+3. Then switch at intersection point 4. Get 4+5+6. Then switch at intersection point 6. Get 9. Total = 2+3+4+5+6+9 = 29.