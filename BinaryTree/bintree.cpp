#include "bintree.h"
#include <iostream>
#include <iomanip>

BinTree::BinTree()
{
    //initialise tree as empty
    root = nullptr;
}

BinTree::~BinTree()
{
    //destructor requires public access fns
    destroyTree();
}

void BinTree::destroyTree(node *leaf)
{
    if (leaf != nullptr)
    {
        //recursively delete each child node
        destroyTree(leaf->left);
        destroyTree(leaf->right);
        delete leaf;
    }
}

void BinTree::insertKey(int keyValue, node *leaf)
{
    if (keyValue < leaf->keyValue)
    {
        //inserting on the left of leaf
        if (leaf->left != nullptr) {
            insertKey(keyValue, leaf->left);
        }
        else
        {
            //as no left node (lower value) exists, create new node to the left.
            leaf->left = new node;
            leaf->left->keyValue = keyValue;
            leaf->left->left = nullptr;
            leaf->left->right = nullptr;
        }
    }
    else if (keyValue >= leaf->keyValue)
    {
        //inserting on the right of leaf
        if (leaf->right != nullptr) {
            insertKey(keyValue, leaf->right);
        }
        else
        {
            //create new node to the right.
            leaf->right = new node;
            leaf->right->keyValue = keyValue;
            leaf->right->left = nullptr;
            leaf->right->right = nullptr;
        }
    }
}

node *BinTree::searchKey(int keyValue, node *leaf)
{
    if (leaf != nullptr)
    {
        if (keyValue == leaf->keyValue)
            return leaf;
        if (keyValue < leaf->keyValue)
            return searchKey(keyValue, leaf->left);
        else
            return searchKey(keyValue, leaf->right);
    } else
        return nullptr;
}

void BinTree::printTree(node *leaf, int indent)
{
    if(leaf != nullptr) {
        if(leaf->left) printTree(leaf->left, indent+4);
        if(leaf->right) printTree(leaf->right, indent+4);
        if (indent) {
            std::cout << std::setw(indent) << ' ';
        }
        std::cout<< leaf->keyValue << "\n ";
    }
}

//now specify public methods
void BinTree::destroyTree()
{
    destroyTree(root);
}

void BinTree::insertKey(int keyValue)
{
    if (root != nullptr)
        insertKey(keyValue, root);
    else
    {
        root = new node;
        root->keyValue = keyValue;
        root->left = nullptr;
        root->right = nullptr;
    }
}

node *BinTree::searchKey(int keyValue)
{
    return searchKey(keyValue, root);
}

void BinTree::printTree(int indent)
{
    printTree(root, indent);
}
