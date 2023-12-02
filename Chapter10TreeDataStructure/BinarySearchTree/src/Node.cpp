#include <Node.hpp>

template <typename T>
Node<T>::Node(T data){
    this->data=data;
    this->left=NULL;
    this->right=NULL;
}


