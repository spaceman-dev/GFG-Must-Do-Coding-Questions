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

## 5. Get Minimum Element from Stack:
    You are given N elements and your task is to Implement a Stack in which you can get minimum element in O(1) time.
    Example 1:
    Input: push(2) push(3) pop() getMin() push(1) getMin()
    Output: 3 2 1 
    Explanation: In the first test case for query 
        push(2)  the stack will be {2}
        push(3)  the stack will be {2 3}
        pop()    poped element will be 3 the stack will be {2}
        getMin() min element will be 2 
        push(1)  the stack will be {2 1}
        getMin() min element will be 1

## 6. LRU Cache:
    Design a data structure that works like a LRU Cache. Here cap denotes the capacity of the cache and Q denotes the number of queries. Query can be of two types:
        SET x y : sets the value of the key x with value y
        GET x : gets the key of x if present else returns -1.
    The LRUCache class has two methods get() and set() which are defined as follows.
        get(key)   : returns the value of the key if it already exists in the cache otherwise returns -1.
        set(key, value) : if the key is already present, update its value. If not present, add the key-value pair to the cache. If the cache reaches its capacity it should invalidate the least recently used item before inserting the new item.
        In the constructor of the class the capacity of the cache should be intitialized.
    Example 1:
    Input: cap = 2, Q = 2, Queries = SET 1 2 GET 1
    Output: 2
    Explanation: 
        Cache Size = 2
        SET 1 2 GET 1
        SET 1 2 : 1 -> 2
        GET 1 : Print the value corresponding to Key 1, ie 2.

## 7. Circular Tour (Direct Approach no Queue required):
    Suppose there is a circle. There are N petrol pumps on that circle. You will be given two sets of data.
        - The amount of petrol that every petrol pump has.
        - Distance from that petrol pump to the next petrol pump.
    Find a starting point where the truck can start to get through the complete circle without exhausting its petrol in between.
    Note :  Assume for 1 litre petrol, the truck can go 1 unit of distance.
    Example 1:
    Input: N = 4 Petrol = 4 6 7 4 Distance = 6 5 3 5
    Output: 1 
    Explanation: There are 4 petrol pumps with amount of petrol and distance to next petrol pump value pairs as {4, 6}, {6, 5}, {7, 3} and {4, 5}. The first point from where truck can make a circular tour is 2nd petrol pump. Output in this case is 1 (index of 2nd petrol pump).

## 8. First Non Repeating character in a stream:
    Given an input stream of A of n characters consisting only of lower case alphabets. The task is to find the first non repeating character, each time a character is inserted to the stream. If there is no such character then append '#' to the answer.
    Example 1:
    Input: A = "aabc"
    Output: "a#bb" 
    Explanation: For every character first non repeating character is as follow- 
            "a" - first non-repeating character is 'a'
            "aa" - no non-repeating character so '#'
            "aab" - first non-repeating character is 'b'
            "aabc" - first non-repeating character is 'b'

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

## 10. Maximum of all subarrays of size k:
    Given an array arr[] of size N and an integer K. Find the maximum for each and every contiguous subarray of size K.
    Example 1:
    Input: N = 9, K = 3 arr[] = 1 2 3 1 4 5 2 3 6
    Output: 3 3 4 5 5 5 6 
    Explanation: 
        1st contiguous subarray = {1 2 3} Max = 3
        2nd contiguous subarray = {2 3 1} Max = 3
        3rd contiguous subarray = {3 1 4} Max = 4
        4th contiguous subarray = {1 4 5} Max = 5
        5th contiguous subarray = {4 5 2} Max = 5
        6th contiguous subarray = {5 2 3} Max = 5
        7th contiguous subarray = {2 3 6} Max = 6