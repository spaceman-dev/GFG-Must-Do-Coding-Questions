# Backtracking

## 1. N Queens Problem:
    The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
    Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. 
    Example 1:
    Input: 4
    Output: [2 4 1 3 ] [3 1 4 2 ]
    Explaination: These are the 2 possible solutions.

## 2. Solve the Sudoku:
    Given an incomplete Sudoku configuration in terms of a 9 x 9  2-D square matrix (grid[][]), the task to find a solved Sudoku. For simplicity, you may assume that there will be only one unique solution.
    Example 1:
    Input: grid[][] = 
        [[3 0 6 5 0 8 4 0 0],
        [5 2 0 0 0 0 0 0 0],
        [0 8 7 0 0 0 0 3 1 ],
        [0 0 3 0 1 0 0 8 0],
        [9 0 0 8 6 3 0 0 5],
        [0 5 0 0 9 0 6 0 0],
        [1 3 0 0 0 0 2 5 0],
        [0 0 0 0 0 0 0 7 4],
        [0 0 5 2 0 6 3 0 0]]
    Output:
        3 1 6 5 7 8 4 9 2
        5 2 9 1 3 4 7 6 8
        4 8 7 6 2 9 5 3 1
        2 6 3 4 1 5 9 8 7
        9 7 4 8 6 3 1 2 5
        8 5 1 7 9 2 6 4 3
        1 3 8 9 4 7 2 5 6
        6 9 2 3 5 1 8 7 4
        7 4 5 2 8 6 3 1 9

## 3. Rat in a Maze Problem - 1:
    Consider a rat placed at (0, 0) in a square matrix of order N * N. It has to reach the destination at (N - 1, N - 1). Find all possible paths that the rat can take to reach from source to destination. The directions in which the rat can move are 'U'(up), 'D'(down), 'L' (left), 'R' (right). Value 0 at a cell in the matrix represents that it is blocked and rat cannot move to it while value 1 at a cell in the matrix represents that rat can be travel through it.
    Note: In a path, no cell can be visited more than one time.
    Example 1:
    Input: N = 4
        m[][] = {{1, 0, 0, 0},
                 {1, 1, 0, 1}, 
                 {1, 1, 0, 0},
                 {0, 1, 1, 1}}
    Output: DDRDRR DRDDRR
    Explanation: The rat can reach the destination at (3, 3) from (0, 0) by two paths - DRDDRR and DDRDRR, when printed in sorted order we get DDRDRR DRDDRR.  
 
 ## 4. Word Boggle (only Backtracking, no Trie):
    Given a dictionary of distinct words and an M x N board where every cell has one character. Find all possible words from the dictionary that can be formed by a sequence of adjacent characters on the board. We can move to any of 8 adjacent characters, but a word should not have multiple instances of the same cell.
    Example 1:
    Input: N = 1, dictionary = {"CAT"}, R = 3, C = 3, board = {{C,A,P},{A,N,D},{T,I,E}}
    Output: CAT
    Explanation: 
        C A P
        A N D
        T I E
    Words we got is denoted using same color.

## 5. Generate IP Addresses:
    Given a string S containing only digits, Your task is to complete the function genIp() which returns a vector containing all possible combination of valid IPv4 ip address and takes only a string S as its only argument.
    Note : Order doesn't matter.
    For string 11211 the ip address possible are 
        1.1.2.11
        1.1.21.1
        1.12.1.1
        11.2.1.1
    Example 1:
    Input: S = 1111
    Output: 1.1.1.1