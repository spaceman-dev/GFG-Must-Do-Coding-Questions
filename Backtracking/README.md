# Backtracking

## 1. N Queens Problem:
    The n-queens puzzle is the problem of placing n queens on a (n×n) chessboard such that no two queens can attack each other.
    Given an integer n, find all distinct solutions to the n-queens puzzle. Each solution contains distinct board configurations of the n-queens’ placement, where the solutions are a permutation of [1,2,3..n] in increasing order, here the number in the ith place denotes that the ith-column queen is placed in the row with that number. 
    Example 1:
    Input: 4
    Output: [2 4 1 3 ] [3 1 4 2 ]
    Explaination: These are the 2 possible solutions.

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
 