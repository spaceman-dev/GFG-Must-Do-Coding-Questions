# Recursion

## 1. Flood Fill Algorithm: 
    An image is represented by a 2-D array of integers, each integer representing the pixel value of the image.
    Given a coordinate (sr, sc) representing the starting pixel (row and column) of the flood fill, and a pixel value newColor, "flood fill" the image.
    To perform a "flood fill", consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color as the starting pixel), and so on. Replace the color of all of the aforementioned pixels with the newColor.
    Example 1:
    Input: image = {{1,1,1},{1,1,0},{1,0,1}}, sr = 1, sc = 1, newColor = 2.
    Output: {{2,2,2},{2,2,0},{2,0,1}}
    Explanation: From the center of the image (with position (sr, sc) = (1, 1)), all pixels connected by a path of the same color as the starting pixel are colored with the new color. Note the bottom corner is not colored 2, because it is not 4-directionally connected to the starting pixel. 

## 2. Number Of Paths:
    The problem is to count all the possible paths from top left to bottom right of a MxN matrix with the constraints that from each cell you can either move to right or down.
    Example 1:
    Input: M = 3 and N = 3
    Output: 6
    Explanation: Let the given input 3*3 matrix is filled as such: 
        A B C
        D E F
        G H I
    The possible paths which exists to reach 'I' from 'A' following above conditions are as follows:ABCFI, ABEHI, ADGHI, ADEFI, ADEHI, ABEFI

## 3. Combination Sum (Part 2):
    Given an array of integers A[] of size N and a sum B, find all unique combinations in A where the sum is equal to B. Each number in A may only be used once in the combination.
    Note: 
        All numbers will be positive integers.
        Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
        The combinations themselves must be sorted in ascending order.
    Example 1:
    Input: N = 7, A = {9, 1, 2, 7, 6, 1, 5}, B = 8
    Output: (1 1 6)(1 2 5)(1 7)(2 6)
    Explaination: These are the only possible combinations for getting sum 8.

## 4. Special Keyboard:
    Imagine you have a special keyboard with the following keys: 
        Key 1:  Prints 'A' on screen
        Key 2: (Ctrl-A): Select screen
        Key 3: (Ctrl-C): Copy selection to buffer
        Key 4: (Ctrl-V): Print buffer on screen appending it after what has already been printed.
    Find maximum numbers of A's that can be produced by pressing keys on the special keyboard N times. 
    Example 2:
    Input: N = 7
    Output: 9
    Explaination: The best key sequence is key 1, key 1, key 1, key 2, key 3, key4, key 4.

## 5. Josephus Problem: 
    Given the total number of persons n and a number k which indicates that k-1 persons are skipped and kth person is killed in circle in a fixed direction.
    The task is to choose the safe place in the circle so that when you perform these operations starting from 1st place in the circle, you are the last one remaining and survive.
    Example 1:
    Input: n = 3 k = 2
    Output: 3
    Explanation: There are 3 persons so skipping 1 person i.e 1st person 2nd person will be killed. Thus the safe position is 3.