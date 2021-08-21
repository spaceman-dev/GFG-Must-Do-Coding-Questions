# Graph

## 1. DFS of a Graph:
    Given a connected undirected graph. Perform a Depth First Traversal of the graph.
    Note: Use recursive approach to find the DFS traversal of the graph starting from the 0th vertex from left to right according to the graph..
    Example 1:
    Input:
    Output: 0 1 2 4 3
    Explanation:  
        0 is connected to 1, 2, 4. 
        1 is connected to 0. 
        2 is connected to 0. 
        3 is connected to 0. 
        4 is connected to 0, 3. 
        so starting from 0, it will go to 1 then 2 
        then 4, and then from 4 to 3.
        Thus dfs will be 0 1 2 4 3.

## 2. BFS of a Graph:
    Given a directed graph. The task is to do Breadth First Traversal of this graph starting from 0.
    Note: One can move from node u to node v only if there's an edge from u to v and find the BFS traversal of the graph starting from the 0th vertex, from left to right according to the graph. Also, you should only take nodes directly or indirectly connected from Node 0 in consideration.
    Example 1:
    Input:
    Output: 0 1 2 3 4
    Explanation: 
        0 is connected to 1 , 2 , 3.
        2 is connected to 4.
        so starting from 0, it will go to 1 then 2 
        then 3.After this 2 to 4, thus bfs will be 
        0 1 2 3 4.

## 3. Detect Cycle in an undirected Graph:
    Given an undirected graph with V vertices and E edges, check whether it contains any cycle or not. 
    Example 1:
    Input:   
    Output: 1
    Explanation: 1->2->3->4->1 is a cycle.

## 4. Detect Cycle in a directed Graph:
    Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.
    Example 1:
    Input:
    Output: 1
    Explanation: 3 -> 3 is a cycle
    
## 5. Topological Sort:
    Given a Directed Graph with V vertices and E edges, Find any Topological Sorting of that Graph.
    Example 1:
    Input:
    Output: 1
    Explanation: The output 1 denotes that the order is valid. So, if you have, implemented your function correctly, then output would be 1 for all test cases. One possible Topological order for the graph is 3, 2, 1, 0. 
    
## 6. Number of Islands:
    Given a grid consisting of '0's(Water) and '1's(Land). Find the number of islands.
    Note: An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.
    Example 1:
    Input: grid = {{0,1},{1,0},{1,1},{1,0}}
    Output: 1
    Explanation: The grid is-
        0 1
        1 0
        1 1
        1 0
    All lands are connected.

## 7. Dijkstra'a Algorithm:
    Given a weighted, undirected and connected graph of V vertices and E edges, Find the shortest distance of all the vertex's from the source vertex S.
    Note: The Graph doesn't contain any negative weight cycle.
    Example 1:
    Input: 2 1
           0 1 9
           0
    Output: 0 9
    Explanation: Shortest distance of all nodes from source is printed.

## 9. Strongly Connected Components(Kosaraju's Algorithm):
    Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, Find the number of strongly connected components in the graph.

## 10. Shortest Source To Destination Path:
    Given a 2D binary matrix A(0-based index) of dimensions NxM. Find the minimum number of steps required to reach from (0,0) to (X, Y).
    Note: You can only move left, right, up and down, and only through cells that contain 1.
    Example 1:
    Input: N=3, M=4, A=[[1,0,0,0], [1,1,0,1],[0,1,1,1]] X=2 Y=3 
    Output: 5
    Explanation: The shortest path is as follows: (0,0)->(1,0)->(1,1)->(2,1)->(2,2)->(2,3).

## 11. Find whether path exists:
    Given a grid of size n*n filled with 0, 1, 2, 3. Check whether there is a path possible from the source to destination. You can traverse up, down, right and left.
    The description of cells is as follows:
        A value of cell 1 means Source.
        A value of cell 2 means Destination.
        A value of cell 3 means Blank cell.
        A value of cell 0 means Wall.
    Note: There are only a single source and a single destination.
    Example 1:
    Input: grid = {{3,0,3,0,0},{3,0,0,0,3}, {3,3,3,3,3},{0,2,3,0,0},{3,0,0,1,3}}
    Output: 0
    Explanation: The grid is-
        3 0 3 0 0 
        3 0 0 0 3 
        3 3 3 3 3 
        0 2 3 0 0 
        3 0 0 1 3 
    There is no path to reach at (3,1) i,e at destination from (4,3) i,e source.

## 12. Minimum Cost Path:
    Given a square grid of size N, each cell of which contains integer cost which represents a cost to traverse through that cell, we need to find a path from top left cell to bottom right cell by which the total cost incurred is minimum. From the cell (i,j) we can go (i,j-1), (i, j+1), (i-1, j), (i+1, j). 
    Note: It is assumed that negative cost cycles do not exist in the input matrix.
    Example 1:
    Input: grid = {{9,4,9,9},{6,7,6,4}, {8,3,3,7},{7,4,9,10}}
    Output: 43
    Explanation: The grid is-
        9 4 9 9
        6 7 6 4
        8 3 3 7
        7 4 9 10
    The minimum cost is - 9 + 4 + 7 + 3 + 3 + 7 + 10 = 43.

## 15. Alien Dictionary:
    Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language.
    Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.
    Example 1:
    Input: N = 5, K = 4, dict = {"baa","abcd","abca","cab","cad"}
    Output: 1
    Explanation: Here order of characters is 'b', 'd', 'a', 'c' Note that words are sorted and in the given language "baa" comes before "abcd", therefore 'b' is before 'a' in output. Similarly we can find other orders.