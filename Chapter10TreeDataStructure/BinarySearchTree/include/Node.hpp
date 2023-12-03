#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node
{
private:
    
public:
int data;
    Node *left;
    Node *right;

    Node(int data,Node *left=nullptr,Node *right=nullptr);
    ~Node();
};




#endif