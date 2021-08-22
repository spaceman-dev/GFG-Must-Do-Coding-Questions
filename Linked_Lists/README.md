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
