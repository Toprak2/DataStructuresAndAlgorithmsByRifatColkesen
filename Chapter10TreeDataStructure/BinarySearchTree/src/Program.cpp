
#include "BSTree.hpp"

int main(){
    BSTree *bstree = new BSTree();
    int i;


    do
    {
        cout<<"0)exit"<<endl;
        cout<<"1)add element"<<endl;
        cout<<"2)inorder list"<<endl;
        cout<<"3)delete element"<<endl;
        cout<<"4)find"<<endl;
        cin>>i;

        switch (i)
        {
        case 1:
        {
            cout<<"enter data to add: "<<endl;
            int data;
            cin>>data;
            bstree->add(data);
            break;
        }   
        case 2:
            bstree->inorderList();
            break;
        case 3:
        {
           cout<<"enter data to remove: ";
            int data;
            cin>>data;
            bstree->removeElement(data);
            break; 
        }
        case 4:
        {
            cout<<"enter the data you want to find: ";
            int data;
            cin>>data;
            bstree->find(data);
            break;
        }
        default:
            break;
        }
    } while (i!=0);
    
    return 0;
}