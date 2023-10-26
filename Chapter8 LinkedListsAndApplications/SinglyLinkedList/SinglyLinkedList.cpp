#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        char message[100];
        Node *next;
};

//function declarations
int add(Node *);
Node* find(int);
Node* erase(int);
Node* getInput();
void printToScreen(Node *);
int listAll();

//Pointers that hold Linked List's first and last nodes addresses
Node *head=NULL , *tailer=NULL;

int main(){
    Node *newNode, *resultNode;
    int data,result;
    int choice;
    while(choice!=0){
        cout<<"0) exit"<<endl;
        cout<<"1) Add new data"<<endl;
        cout<<"2) List all data"<<endl;
        cout<<"3) Find data"<<endl;
        cout<<"4) Delete data"<<endl;
        
        cin>>choice;

        switch (choice)
        {
        case 0:
            exit(0);
            break;
        
        case 1:
            newNode = getInput();
            if(newNode!=NULL){
                add(newNode);
            }
            else{
                cout<<"Memory is full. Can't add."<<endl;
            }
            break;

        case 2:
            result=listAll();
            if(result==-1){
                cout<<"List is empty!"<<endl;
            }
            break;
        
        case 3:
            cout<<"data to find: ";
            cin>>data;
            resultNode = find(data);
            if(resultNode==NULL){
                cout<<"Couldnt find the data"<<endl;
            }
            else{
                printToScreen(resultNode);
            }    
            break;

        case 4:
            cout<<"Data to delete: ";
            cin>>data;
            resultNode = erase(data);
            if(resultNode!=NULL){
                cout<<"data is deleted"<<endl;
            }
            else{
                cout<<"The data is not in the list to delete"<<endl;
            }
            break;

        default:
            cout<<"Enter a valid choice"<<endl;
            break;
        }
    }
}
int add(Node *newNode){
    if(head!=NULL){
        tailer->next=newNode;
        tailer=newNode;
        tailer->next=NULL;
    }
    else{
        head=newNode;
        tailer=newNode;
        head->next=NULL;
    }
    return 0;
}

Node* find(int wantedData){
    Node *p;
    p=head;
    while(p!=NULL){
        if(p->data==wantedData){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

Node *erase(int dataToDelete){
    Node *p, *previous;
    p=head;
    previous=NULL;

    while (p!=NULL) //search for node to delete
    {   
        if(dataToDelete==p->data){
            break;
        }
        previous=p;
        p=p->next;
    }

    if(p!=NULL){
        if(previous==NULL){ //first node is the node to delete
            if(head==tailer){
                head=NULL;
                tailer=NULL;
            }
            else{
            head=head->next;
        }
        }
        else{
            previous->next=p->next;
            if(previous->next==NULL){ // last node is the node to delete
                tailer=previous;
            }   
        }
        delete p;
        return p;     
    }
    

    return NULL; //the node wanted to delete was not in the list
}

Node *getInput(){
    Node *input;

    input = new Node();
    if(input==NULL){ //check if there was available memory;
        return NULL;
    }

    cout<<"Enter data: ";
    cin>>input->data;
    cout<<"Enter message: ";
    cin>>input->message;
    return input;
}

void printToScreen(Node *node){
    cout<<"data: "<<node->data<<" "<<"message: "<<node->message<<endl;
}

int listAll(){
    Node *p = head;

    while (p!=NULL)
    {
        printToScreen(p);
        p=p->next;
    }
    return 0;
}