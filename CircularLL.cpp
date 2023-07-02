#include<iostream>
using namespace std;

class Node{
    public:
    int data=1;
    Node* next=NULL;
   
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

    ~Node(){
        int value =this->data;
        //memory free
        if(this->next!= NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
}; 

void insertNode(Node*& tail,int elmt,int d){
    //assuming that the element is present int the list

    //empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail=newNode;
        newNode->next=newNode;
    }else{
        //non-empty List
        //assuming that the element is present in the list

        Node* curr=tail;
        while(curr->data != elmt){
            curr=curr->next;
        }

        //element found -> curr is represented element wala node
        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void print(Node*& tail){
    Node* temp=tail;
    if(tail==NULL){
        cout<<"LIst is Empty"<<endl;
        return;
    }

    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
    cout<<endl;
}

void deleteNode(Node *&tail ,int value){
    //empty List
    if(tail==NULL){
        cout<<"List is empty ,please check again."<<endl;
        return;
    }
    else{
        //non empty

        //assuming that "value is present in the Linked List"
        Node* prev=tail;
        Node* curr=prev->next;

        while(curr->data != value){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        //1 Node Linked List
        if(tail==prev){
            tail=NULL;
        }

        //2 Node Linked List
        else if(tail==curr){
            tail=prev;
        }

        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;

    //empty list me insert krre hai
    insertNode(tail,5,3);
    print(tail);

    // insertNode(tail,3,5);
    // print(tail);

    // insertNode(tail,5,7);
    // print(tail);

    // insertNode(tail,7,10);
    // print(tail);

    // insertNode(tail,5,15);
    // print(tail);

    deleteNode(tail,3);
    print(tail);
    return 0;
}