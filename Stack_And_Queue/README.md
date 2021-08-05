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
