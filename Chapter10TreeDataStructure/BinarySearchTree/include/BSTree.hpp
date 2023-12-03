#ifndef BSTREE_HPP
#define BSTREE_HPP

#include "Node.hpp"

class BSTree
{
private:
    Node *root;
    void searchAndAdd(Node*&,int);
    bool searchAndDelete(Node *&,int);
    bool deleteNode(Node *&);
    bool searchAndFind(Node *,int);
    void inorder(Node *);
public:
    BSTree();
    ~BSTree();
    void add(int data);
    void removeElement(int);
    void find(int); 
    void inorderList();
       
};



#endif