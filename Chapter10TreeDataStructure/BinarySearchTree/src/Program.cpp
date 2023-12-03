
#include "BSTree.hpp"

int main(){
    BSTree *bstree = new BSTree();
    int i;


    do
    {
        cout<<"0)exit"<<endl;
        cout<<"1)add element"<<endl;
        cout<<"2)inorder list"<<endl;
        cin>>i;

        switch (i)
        {
        case 1:
            cout<<"enter data to add: "<<endl;
            int data;
            cin>>data;
            bstree->add(data);
            break;
        case 2:
            bstree->inorderList();
            break;
        default:
            break;
        }
    } while (i!=0);
    
    return 0;
}