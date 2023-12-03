#ifndef BSTREE_HPP
#define BSTREE_HPP

#include "Node.hpp"

class BSTree
{
private:
    Node *root;
    void searchAndAdd(Node*&,int);
    void inorder(Node *);
public:
    BSTree();
    ~BSTree();
    void add(int data);
    void inorderList();    
};



#endif