#ifndef BINTREE_H
#define BINTREE_H


struct node {
    int keyValue;
    node *left;
    node *right;
};

class BinTree {
public:
    BinTree(); //Constructor
    ~BinTree(); //Destructor

    void insertKey(int keyValue);
    node *searchKey(int keyValue);
    void destroyTree();
    void printTree();

private:
    void destroyTree(node *leaf);
    void insertKey(int keyValue, node *leaf);
    void printTree(node *leaf);
    node *searchKey(int keyValue, node *leaf);
    node *root;
};

#endif // BINTREE_H
