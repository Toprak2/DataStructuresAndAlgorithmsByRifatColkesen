#include <Node.hpp>


Node::Node(int data,Node *left,Node *right){
    this->data=data;
    this->left=left;
    this->right=right;
}

Node::~Node(){
    
}
