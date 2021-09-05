# Linked Lists

## 1. Finding Middle Element of Linked List:
    Given a singly linked list of N nodes. The task is to find the middle of the linked list. For example, if given linked list is 1->2->3->4->5 then the output should be 3.
    If there are even nodes, then there would be two middle nodes, we need to print the second middle element. For example, if given linked list is 1->2->3->4->5->6 then the output should be 4.
    Example 1:
    Input: LinkedList: 1->2->3->4->5
    Output: 3 
    Explanation: Middle of linked list is 3.

## 2. Reverse Linked List:
    Given a linked list of N nodes. The task is to reverse this list.
    Example 1:
    Input: LinkedList: 1->2->3->4->5->6
    Output: 6 5 4 3 2 1
    Explanation: After reversing the list, elements are 6->5->4->3->2->1.

## 3. Rotate a Linked List:
    Given a singly linked list of size N. The task is to rotate the linked list counter-clockwise by k nodes, where k is a given positive integer smaller than or equal to length of the linked list.
    Example 1:
    Input: N = 5 value[] = {2, 4, 7, 8, 9} k = 3
    Output: 8 9 2 4 7
    Explanation:
        Rotate 1: 4 -> 7 -> 8 -> 9 -> 2
        Rotate 2: 7 -> 8 -> 9 -> 2 -> 4
        Rotate 3: 8 -> 9 -> 2 -> 4 -> 7

## 4. Reverse linked list in groups of a given size:
    Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).
    Example 1:
    Input: LinkedList: 1->2->2->4->5->6->7->8, K = 4
    Output: 4 2 2 1 8 7 6 5 
    Explanation: The first 4 elements 1,2,2,4 are reversed first and then the next 4 elements 5,6,7,8. Hence, the resultant linked list is 4->2->2->1->8->7->6->5.

## 8. Nth node from end of Linked List:
    Given a linked list consisting of L nodes and given a number N. The task is to find the Nth node from the end of the linked list.
    Example 1:
    Input: N = 2, LinkedList: 1->2->3->4->5->6->7->8->9
    Output: 8
    Explanation: In the first example, there are 9 nodes in linked list and we need to find 2nd node from end. 2nd node from end is 8.  

## 9. Flattening a Linked List:
    Given a Linked List of size N, where every node represents a sub-linked-list and contains two pointers:
    (i) a next pointer to the next node,
    (ii) a bottom pointer to a linked list where this node is head.
    Each of the sub-linked-list is in sorted order. Flatten the Link List such that all the nodes appear in a single level while maintaining the sorted order. 
    Note: The flattened list will be printed using the bottom pointer instead of next pointer.
    Example 1:
    Input:
        5 -> 10 -> 19 -> 28
        |     |     |     | 
        7     20    22   35
        |           |     | 
        8          50    40
        |                 | 
        30               45
    Output:  5-> 7-> 8- > 10 -> 19-> 20->22-> 28-> 30-> 35-> 40-> 45-> 50.
    Explanation: The resultant linked lists has every node in a single level. (Note: | represents the bottom pointer.)

## 10. Merge two sorted linked lists:
    Given two sorted linked lists consisting of N and M nodes respectively. The task is to merge both of the list (in-place) and return head of the merged list.
    Example 1:
    Input: N = 4, M = 3 
    valueN[] = {5,10,15,40}
    valueM[] = {2,3,20}
    Output: 2 3 5 10 15 20 40
    Explanation: After merging the two linked lists, we have merged list as 2, 3, 5, 10, 15, 20, 40.


## 12. Pairwise swap elements of linked list:
    Given a singly linked list of size N. The task is to swap elements in the linked list pairwise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
    Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.
    Example 1:
    Input: LinkedList: 1->2->2->4->5->6->7->8
    Output: 2 1 4 2 6 5 8 7
    Explanation: After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.

## 17. Given Linked Lists of 0s, 1s, 2s, sort it:
    Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
    Example 1:
    Input: N = 8, value[] = {1,2,2,1,2,0,2,2}
    Output: 0 1 1 2 2 2 2 2
    Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.
