# Heaps

## 1. Find Median in a stream:
    Given an input stream of N integers. The task is to insert these numbers into a new stream and find the median of the stream formed by each insertion of X to the new stream.
    Example 1:
    Input:  N = 4, X[] = 5,15,1,3
    Output:
    5
    10
    5
    4
    Explanation: Flow in stream : 5, 15, 1, 3 
        5 goes to stream --> median 5 (5) 
        15 goes to stream --> median 10 (5,15) 
        1 goes to stream --> median 5 (5,15,1) 
        3 goes to stream --> median 4 (5,15,1 3) 

## 2. Heap Sort:
    Given an array of size N. The task is to sort the array elements by completing functions heapify() and buildHeap() which are used to implement Heap Sort.
    Example 1:
    Input: N = 5, arr[] = {4,1,3,9,7}
    Output: 1 3 4 7 9
    Explanation: After sorting elements using heap sort, elements will be in order as 1,3,4,7,9.

## 3. Binary Heap Operations:
    A binary heap is a Binary Tree with the following properties:
    1) It’s a complete tree (All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array.
    2) A Binary Heap is either Min Heap or Max Heap. In a Min Binary Heap, the key at the root must be minimum among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.
    You are given an empty Binary Min Heap and some queries and your task is to implement the three methods insertKey,  deleteKey,  and extractMin on the Binary Min Heap and call them as per the query given below:
    1) 1  x  (a query of this type means to insert an element in the min-heap with value x )
    2) 2  x  (a query of this type means to remove an element at position x from the min-heap)
    3) 3  (a query like this removes the min element from the min-heap and prints it ).
    Example 1:
    Input:
        Q = 7
        Queries:
        insertKey(4)
        insertKey(2)
        extractMin()
        insertKey(6)
        deleteKey(0)
        extractMin()
        extractMin()
    Output: 2 6 - 1
    Explanation: In the first test case for query 
    insertKey(4) the heap will have  {4}  
    insertKey(2) the heap will be {2 4}
    extractMin() removes min element from 
                heap ie 2 and prints it
                now heap is {4} 
    insertKey(6) inserts 6 to heap now heap
             is {4 6}
    deleteKey(0) delete element at position 0
             of the heap,now heap is {6}
    extractMin() remove min element from heap
             ie 6 and prints it  now the
             heap is empty
    extractMin() since the heap is empty thus
             no min element exist so -1
             is printed.

## 5. Merge K Sorted Linked Lists:
    Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.
    Example 1:
    Input:
    K = 4
    value = {{1,2,3},{4 5},{5 6},{7,8}}
    Output: 1 2 3 4 5 5 6 7 8
    Explanation: The test case has 4 sorted linked list of size 3, 2, 2, 2
        1st    list     1 -> 2-> 3
        2nd   list      4->5
        3rd    list      5->6
        4th    list      7->8
        The merged list will be 1->2->3->4->5->5->6->7->8.

## 6. Kth Largest Element in a stream:
    Given an input stream arr[] of n integers. Find the Kth largest element for each element in the stream and if the Kth element doesn't exist, return -1.
    Example 1:
    Input: k = 4, n = 6, arr[] = {1, 2, 3, 4, 5, 6}
    Output: -1 -1 -1 1 2 3
    Explanation: k = 4
        For 1, the 4th largest element doesn't exist so we print -1.
        For 2, the 4th largest element doesn't exist so we print -1.
        For 3, the 4th largest element doesn't exist so we print -1.
        For 4, the 4th largest element is 1.
        For 5, the 4th largest element is 2.
        For 6, the 4th largest element is 3.