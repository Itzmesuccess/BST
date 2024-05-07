#include <iostream>
#include <cstdlib>
#include <ctime>
#include "BTree.h"

using namespace std;

void BTree::insert(BTreeNode*& nodePtr, BTreeNode*& newNode)
{
    if (nodePtr == nullptr)

        nodePtr = newNode; //insert  new node

    else if (newNode->value < nodePtr->value)

        insert(nodePtr->left, newNode); //search left subtree

    else

        insert(nodePtr->right, newNode); //search right subtree
}

void BTree::insertNode(int num)
{
    BTreeNode* newNode = new BTreeNode(num);

    insert(root, newNode);
}

void BTree::traversePreOrder(BTreeNode* node)
{
    if (node) 
    {
        cout << node->value << " ";

        traversePreOrder(node->left);

        traversePreOrder(node->right);
    }
}

void BTree::traverseInOrder(BTreeNode* node) 
{
    if (node) 
    {
        traverseInOrder(node->left);

        cout << node->value << " ";

        traverseInOrder(node->right);
    }
}

void BTree::traversePostOrder(BTreeNode* node) 
{
    if (node) 

    {
        traversePostOrder(node->left);

        traversePostOrder(node->right);

        cout << node->value << " ";
    }
}
