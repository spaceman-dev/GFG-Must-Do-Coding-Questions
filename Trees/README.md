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

## 5. Level Order Traversal in Spiral Form:
    Complete the function to find spiral order traversal of a tree. For below tree, function should return 1, 2, 3, 4, 5, 6, 7.
    Example 1:
    Input:
             10
           /     \
          20     30
        /    \
      40     60
    Output: 10 20 30 60 40 

## 6. Connect Nodes at Same Level:
    Given a binary tree, connect the nodes that are at same level. You'll be given an addition nextRight pointer for the same.
    Initially, all the nextRight pointers point to garbage values. Your function should set these pointers to point next right for each node.
           10                       10 ------> NULL
          / \                       /      \
         3   5       =>     3 ------> 5 --------> NULL
        / \     \               /  \           \
         4   1   2          4 --> 1 -----> 2 -------> NULL
    Example 1:
    Input:
       3
     /  \
    1    2
    Output:
      3 1 2
      1 3 2
    Explanation:The connected tree is
        3 ------> NULL
     /    \
    1-----> 2 ------ NULL

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

## 8. Convert Binary Tree to Doubly Linked List:
    Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.
    Example 1:
    Input:
        1
      /  \
     3    2
    Output: 3 1 2, 2 1 3 
    Explanation: DLL would be 3<=>1<=>2

## 9. Determine if Two Trees are Identical:
    Given two binary trees, the task is to find if both of them are identical or not. 
    Example 2:
    Input:
        1          1
      /   \      /   \
      2     3    2     3
    Output: Yes
    Explanation: There are two trees both having 3 nodes and 2 edges, both trees are identical having the root as 1, left child of 1 is 2 and right child of 1 is 3.

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

## 11. Height of a Binary Tree:
    Given a binary tree, find its height.
    Example 1:
    Input:
       1
      /  \
     2    3
    Output: 2
## 12. Maximum Path Sum Between two leaf nodes:
    Given a binary tree in which each node element contains a number. Find the maximum possible sum from one leaf node to another leaf node.
    Note: Here Leaf node is a node which is connected to exactly one different node.
    Example 1:
    Input:      
           3                               
         /    \                          
       4       5                     
      /  \      
    -10   4                          
    Output: 16
    Explanation: Maximum Sum lies between leaf node 4 and 5. 4 + 4 + 3 + 5 = 16.

## 13. Diameter of a Binary Tree:
    Given a Binary Tree, find diameter of it.
    The diameter of a tree is the number of nodes on the longest path between two end nodes in the tree. The diagram below shows two trees each with diameter nine, the leaves that form the ends of a longest path are shaded (note that there is more than one path in each tree of length nine, but no path longer than nine nodes).
    Example 1:
    Input:
       1
     /  \
    2    3
    Output: 3

## 14. Count Leaves in a Binary Tree:
    Given a Binary Tree of size N , You have to count leaves in it. For example, there are two leaves in following tree
            1
        /      \
       10      39
    /
    5
    Example 1: 
    Input: Given Tree is 
               4
             /   \
            8     10
           /     /   \
          7     5     1
         /
        3 
    Output: 3
    Explanation: Three leaves are 3 , 5 and 1.

## 15. Check for Balanced Tree:
    Given a binary tree, find if it is height balanced or not. 
    A tree is height balanced if difference between heights of left and right subtrees is not more than one for all nodes of tree. 
    A height balanced tree
            1
         /     \
       10      39
      /
    5
    An unbalanced tree
            1
           /    
         10   
        /
      5

## 16. Serialize and Deserialize a Binary Tree:
    Serialization is to store a tree in an array so that it can be later restored and Deserialization is reading tree back from the array. Now your task is to complete the function serialize which stores the tree into an array A[ ] and deSerialize which deserializes the array to tree and returns it.
    Note: The structure of tree must be maintained.
    Example 1:
    Input:
        1
      /   \
     2     3
    Output: 2 1 3