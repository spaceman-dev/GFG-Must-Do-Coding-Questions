# Some more questions on Trees

## 1. Mirror Tree:
    Given a Binary Tree, convert it into its mirror.
    Example 1:
    Input:
          1
        /  \
       2    3
    Output: 2 1 3
    Explanation: The tree is
           1    (mirror)  1
         /  \    =>      /  \
        3    2          2    3
    The inorder of mirror is 2 1 3

## 2. Longest Consecutive Sequence in a Binary Tree:
    Given a Binary Tree find the length of the longest path which comprises of connected nodes with consecutive values in increasing order. 
    Example 1:
    Input :      
           1                               
         /   \                          
        2     3                      
    Output: 2
    Explanation : Longest sequence is 1, 2.

## 3. Bottom View of a Binary Tree:
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
    Example 1:
    Input:
         1
       /   \
      3     2
    Output: 3 1 2
    Explanation: First case represents a tree with 3 nodes and 2 edges where root is 1, left child of 1 is 3 and right child of 1 is 2.

## 4. Lowest Common Ancestor in a Binary Tree:
    Given a Binary Tree with all unique values and two nodes value n1 and n2. The task is to find the lowest common ancestor of the given two nodes. We may assume that either both n1 and n2 are present in the tree or none of them is present. 
    Example 1:
    Input: n1 = 2 , n2 =  3
       1
     /  \
    2    3
    Output: 1
    Explanation: LCA of 2 and 3 is 1.

## 5. Binary Tree to DLL:
    Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place. The left and right pointers in nodes are to be used as previous and next pointers respectively in converted DLL. The order of nodes in DLL must be same as Inorder of the given Binary Tree. The first node of Inorder traversal (leftmost node in BT) must be the head node of the DLL.
    Example 1:
    Input:
        1
      /  \
     3    2
    Output:
    3 1 2 
    2 1 3 
    Explanation: DLL would be 3<=>1<=>2