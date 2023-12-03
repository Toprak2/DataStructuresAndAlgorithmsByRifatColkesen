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

bool BSTree::searchAndDelete(Node *& subNode,int data){
   if(subNode==nullptr) return false;
   if(data == subNode->data){
      return deleteNode(subNode);
   }
   else if(data> subNode->data){
      return deleteNode(subNode->left);
   }
   else{
      return deleteNode(subNode->right);
   }
}

bool BSTree::deleteNode(Node *&subNode)
{
   Node *delNode = subNode;

   if(subNode->right==nullptr)subNode=subNode->left;
   else if(subNode->left==nullptr) subNode=subNode->right;
   else{
      delNode=subNode->left;
      Node *parent = subNode;
      while(delNode->right!=nullptr){
         parent=delNode;
         delNode=delNode->right;
      }
      subNode->data=delNode->data;
      if(subNode==delNode) subNode->left=delNode->left;
      else parent->right=delNode->left;
   }
   delete delNode; 
   return true;
}

bool BSTree::searchAndFind(Node *subNode, int data)
{
    if(subNode==nullptr) return false;
    else if(data == subNode->data) return true;
    else if(data < subNode->data) return searchAndFind(subNode->left,data);
    else return searchAndFind(subNode->right,data);
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

void BSTree::removeElement(int data)
{
   searchAndDelete(root,data);
}

void BSTree::find(int data)
{
   if(searchAndFind(root,data))
      cout<<"Data exists in the tree"<<endl;
   else
   cout<<"Data doesn't exist in tree"<<endl;
}

void BSTree::inorderList(){
   inorder(root);
   cout<<endl;
}