#ifndef BTREE_H
#define BTREE_H

class BTreeNode 
{

public:

    int value;

    BTreeNode* left;

    BTreeNode* right;

    BTreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};

class BTree 
{

private:

    BTreeNode* root;

    void insert(BTreeNode*& nodePtr, BTreeNode*& newNode);

public:

    BTree() : root(nullptr) {}

    void insertNode(int num);

    void traversePreOrder(BTreeNode* node);

    void traverseInOrder(BTreeNode* node);

    void traversePostOrder(BTreeNode* node);

    BTreeNode* getRoot() { return root; } 
};

#endif
