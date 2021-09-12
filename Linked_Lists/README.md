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

## 5. Intersection point in Y shaped linked lists:
    Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.
    Example 1:
    Input:
    LinkList1 = 3->6->9->common 
    LinkList2 = 10->common 
    common = 15->30->NULL
    Output: 15

## 6. Detect loop in linked list:
    Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.
    Example 1:
    Input: N = 3, value[] = {1,3,4}, x = 2
    Output: True
    Explanation: In above test case N = 3. The linked list with nodes N = 3 is given. Then value of x=2 is given which means last node is connected with xth node of linked list. Therefore, there exists a loop.

## 7. Remove loop in linked list:
    Given a linked list of N nodes such that it may contain a loop. A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0. Remove the loop from the linked list, if it is present.  
    Example 1:
    Input:
    N = 3
    value[] = {1,3,4}
    X = 2
    Output: 1
    Explanation: The link list looks like
        1 -> 3 -> 4
             ^    |
             |____|    
    A loop is present. If you remove it successfully, the answer will be 1. 

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

## 11. Intersection Point of two linked lists:
    Given two singly linked lists of size N and M, write a program to get the point where two linked lists intersect each other.
    Example 1:
    Input:
        LinkList1 = 3->6->9->common
        LinkList2 = 10->common
        common = 15->30->NULL
    Output: 15

## 12. Pairwise swap elements of linked list:
    Given a singly linked list of size N. The task is to swap elements in the linked list pairwise. For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
    Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.
    Example 1:
    Input: LinkedList: 1->2->2->4->5->6->7->8
    Output: 2 1 4 2 6 5 8 7
    Explanation: After swapping each pair considering (1,2), (2, 4), (5, 6).. so on as pairs, we get 2, 1, 4, 2, 6, 5, 8, 7 as a new linked list.

## 13. Add 2 numbers represented by a linked list:
    Given two numbers represented by two linked lists of size N and M. The task is to return a sum list.
    The sum list is a linked list representation of the addition of two input numbers from the last.
    Example 1:
    Input:
    N = 2, valueN[] = {4,5}
    M = 3, valueM[] = {3,4,5}
    Output: 3 9 0  
    Explanation: For the given two linked list (4 5) and (3 4 5), after adding the two linked list resultant linked list will be (3 9 0).

## 14. Check if linked list is a palindrome:
    Given a singly linked list of size N of integers. The task is to check if the given linked list is palindrome or not.
    Example 1:
    Input: N = 3, value[] = {1,2,1}
    Output: 1
    Explanation: The given linked list is 1 2 1 , which is a palindrome and hence, the output is 1.

## 15. Implement a Queue using linked list:
    Implement a Queue using Linked List. 
        A Query Q is of 2 Types
        (i) 1 x   (a query of this type means  pushing 'x' into the queue)
        (ii) 2     (a query of this type means to pop an element from the queue and print the poped element)
    Example 1:
    Input: Q = 5, Queries = 1 2 1 3 2 1 4 2
    Output: 2 3
    Explanation: n the first testcase
        1 2 the queue will be {2}
        1 3 the queue will be {2 3}
        2   poped element will be 2 the
        queue will be {3}
        1 4 the queue will be {3 4}
        2   poped element will be 3.

## 16. Implement a Stack using linked list:
    Let's give it a try! You have a linked list and you have to implement the functionalities push and pop of stack using this given linked list. Your task is to use the class as shown in the comments in the code editor and complete the functions push() and pop() to implement a stack. 
    Example 1:
    Input: 
        push(2)
        push(3)
        pop()
        push(4) 
        pop()
        Output: 3 4
    Explanation: 
        push(2)    the stack will be {2}
        push(3)    the stack will be {2 3}
        pop()      poped element will be 3, the stack will be {2}
        push(4)    the stack will be {2 4}
        pop()      poped element will be 4

## 17. Given Linked Lists of 0s, 1s, 2s, sort it:
    Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only. The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of the linked list, and 1s in the mid of 0s and 2s.
    Example 1:
    Input: N = 8, value[] = {1,2,2,1,2,0,2,2}
    Output: 0 1 1 2 2 2 2 2
    Explanation: All the 0s are segregated to the left end of the linked list, 2s to the right end of the list, and 1s in between.

## 18. Delete without head pointer:
    You are given a pointer/ reference to the node which is to be deleted from the linked list of N nodes. The task is to delete the node. Pointer/ reference to head node is not given. 
    Note: No head reference is given to you. It is guaranteed that the node to be deleted is not a tail node in the linked list.
    Example 1:
    Input: N = 2, value[] = {1,2}, node = 1
    Output: 2
    Explanation: After deleting 1 from the linked list, we have remaining nodes as 2.