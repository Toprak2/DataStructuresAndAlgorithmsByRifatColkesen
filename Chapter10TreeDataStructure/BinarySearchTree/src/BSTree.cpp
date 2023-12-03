#include "BSTree.hpp"

BSTree::BSTree(){
   this->root =nullptr; 
}

BSTree::~BSTree(){

}

void BSTree::searchAndAdd(Node *&subRoot,int data){
   if(subRoot==nullptr){
      subRoot=new Node(data);
   }
   else if (data <  subRoot->data)
   {
      searchAndAdd(subRoot->left,data);
   }
   else{
      searchAndAdd(subRoot->right,data);
   }
   

}

void BSTree::inorder(Node *subNode)
{
   if(subNode!=nullptr){
      inorder(subNode->left);
      cout<<subNode->data<<" ";
      inorder(subNode->right);
   }
   ;
}

void BSTree::add(int data){
   searchAndAdd(root,data);
}

void BSTree::inorderList(){
   inorder(root);
   cout<<endl;
}