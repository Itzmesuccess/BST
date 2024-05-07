Binary Search Tree (BST) Project

This project implements a Binary Search Tree (BST) in C++ using a linked list. It generates 40 random natural numbers less than 100,
constructs a BST with these numbers, and performs pre-order, in-order, and post-order traversals on the tree.

Files

- `BTree.h: Header file containing the declarations of the `BTree` class and `BTreeNode` struct.
- 
- `BTree.cpp: Implementation file containing the definitions of methods of the `BTree` class.
- 
- `main.cpp: Main file containing the `main()` function where the BST is created and traversals are performed.

- INPUT
- The input consists of 40 randomly generated natural numbers, each less than 100. These numbers are generated using the rand() function in C++, ensuring that each number is between 0 and 99
- OUTPUT
- After constructing a binary search tree using the generated numbers, three types of tree traversals are performed:

Pre-order Traversal: In pre-order traversal, each node is visited before its children are visited. The output shows the elements in the order they are visited.
In-order Traversal: In in-order traversal, the left subtree is visited first, followed by the root, and then the right subtree. The output shows the elements in sorted order.
Post-order Traversal: In post-order traversal, each node's children are visited before the node itself is visited. The output shows the elements in the order they are visited.

- 

![Screenshot 2024-05-07 114538](https://github.com/Itzmesuccess/BST/assets/164071129/4d8c6fb3-78e9-4d87-9cd7-3dcd59f4385d)
