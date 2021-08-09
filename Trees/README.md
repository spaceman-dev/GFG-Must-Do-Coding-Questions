# Trees

## 1. Left View of a Binary Tree:
    Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side. The task is to complete the function leftView(), which accepts root of the tree as argument.
    Left view of following tree is 1 2 4 8.
             1
            /     \
         2        3
        /     \    /    \
        4     5   6    7
        \
            8   
        
## 2. Check for BST:
    Given a binary tree. Check whether it is a BST or not.
    Note: We are considering that BSTs can not contain duplicate Nodes.
    Example 1:
    Input:
          2
        /    \
        1      3
    Output: 1 
    Explanation: The left subtree of root node contains node with key lesser than the root node’s key and the right subtree of root node contains node with key greater than the root node’s key. Hence, the tree is a BST.

## 3. Bottom View of Binary Tree:
    Given a binary tree, print the bottom view from left to right.
    A node is included in bottom view if it can be seen when we look at the tree from bottom.

                      20
                    /    \
                  8       22
                /   \        \
              5      3       25
                    /   \      
                  10    14

    For the above tree, the bottom view is 5 10 3 14 25.
    If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal. For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

                      20
                    /    \
                  8       22
                /   \     /   \
              5      3 4     25
                     /    \      
                 10       14

    For the above tree the output should be 5 10 4 14 25.

## 4. Vertical Traversal of Binary Tree:
    Given a Binary Tree, find the vertical traversal of it starting from the leftmost level to the rightmost level.
    If there are multiple nodes passing through a vertical line, then they should be printed as they appear in level order traversal of the tree.
    Example 1:
    Input:
                1
              /   \
            2       3
          /   \   /   \
         4      5 6      7
         \      \
          8      9           
    Output: 4 2 1 5 6 3 8 7 9 

## 7. Lowest Common Ancestor in a BST:
    Given a Binary Search Tree (with all values unique) and two node values. Find the Lowest Common Ancestors of the two nodes in the BST.
    Example 1:
    Input:
              5
           /    \
         4       6
        /         \
       3           7
                    \
                     8
    n1 = 7, n2 = 8
    Output: 7

## 10. Is Tree Symmetric:
    Given a Binary Tree. Check whether it is Symmetric or not, i.e. whether the binary tree is a Mirror image of itself or not.
    Example 1:
    Input:
         5
       /   \
      1     1
     /       \
    2         2
    Output: True
    Explanation: Tree is mirror image of itself i.e. tree is symmetric
