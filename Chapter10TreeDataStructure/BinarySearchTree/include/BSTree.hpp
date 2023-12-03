#ifndef BSTREE_HPP
#define BSTREE_HPP

#include "Node.hpp"

class BSTree
{
private:
    Node *root;
    void searchAndAdd(Node*&,int);
public:
    BSTree();
    ~BSTree();
    void add(int data);
};



#endif