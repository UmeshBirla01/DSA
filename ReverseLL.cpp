#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
   
    //constructor
    Node(int d){
        this->data=d;
        this->next=NULL;
    }

};

void insertAtHead(Node*& head,int d){
    // new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}


void print(Node*& head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(3);
    Node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,7);  
    insertAtHead(head,9);
    print(head);
    return 0;
}