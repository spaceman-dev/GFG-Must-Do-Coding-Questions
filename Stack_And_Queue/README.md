# Stack and Queue

## 1. Parenthesis Checker:
    Given an expression string x. Examine whether the pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are correct in exp. For example, the function should return 'true' for exp = “[()]{}{[()()]()}” and 'false' for exp = “[(])”.
    Example 1:
    Input: {([])}
    Output: true
    Explanation: { ( [ ] ) }. Same brackets can form balaced pairs, with 0 number of unbalanced bracket.

## 2. Next Greater Element:
    Given an array arr[ ] of size N having distinct elements, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. For example, next greater of the last element is always -1.
    Example 1:
    Input: N = 4, arr[] = [1 3 2 4]
    Output: 3 4 4 -1
    Explanation: In the array, the next larger element to 1 is 3 , 3 is 4 , 2 is 4 and for 4 ? since it doesn't exist, it is -1.

## 3. Queue using 2 Stacks:
    Implement a Queue using 2 stacks s1 and s2 .
        A Query Q is of 2 Types
        (i) 1 x (a query of this type means  pushing 'x' into the queue)
        (ii) 2   (a query of this type means to pop element from queue and print the poped element)
    Example 1:
    Input: 5    1 2 1 3 2 1 4 2
    Output: 2 3
    Explanation: In the first testcase 
        1 2 the queue will be {2}
        1 3 the queue will be {2 3}
        2   poped element will be 2 the queue will be {3}
        1 4 the queue will be {3 4}
        2   poped element will be 3.

## 4. Stack using 2 Queues:
    Implement a Stack using two queues q1 and q2.
    Example 1:
    Input:  push(2) push(3) pop() push(4) pop()
    Output: 3 4
    Explanation:
        push(2) the stack will be {2}
        push(3) the stack will be {2 3}
        pop()   poped element will be 3 the stack will be {2}
        push(4) the stack will be {2 4}
        pop()   poped element will be 4  

## 9. Rotten Oranges:
    Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
    0 : Empty cell
    1 : Cells have fresh oranges
    2 : Cells have rotten oranges
    We have to determine what is the minimum time required to rot all oranges. A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right) in unit time. 
    Example 1:
    Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
    Output: 1
    Explanation: The grid is-
        0 1 2
        0 1 2
        2 1 1
        Oranges at positions (0,2), (1,2), (2,0) will rot oranges at (0,1), (1,1), (2,2) and (2,1) in unit time.
