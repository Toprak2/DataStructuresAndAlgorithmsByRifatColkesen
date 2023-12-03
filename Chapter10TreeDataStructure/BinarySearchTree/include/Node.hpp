#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

class Node
{
private:
    /* data */
    int data;
    Node *left;
    Node *right;
public:
    Node(int);
    ~Node();
};




#endif