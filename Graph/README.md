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
