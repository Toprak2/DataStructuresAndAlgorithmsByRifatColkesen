#ifndef NODE_HPP
#define NODE_HPP

#include <iostream>

template<typename T>
class Node
{
private:
    /* data */
    T data;
    Node *left;
    Node *right;
public:
    Node(T);
    ~Node();
};




#endif