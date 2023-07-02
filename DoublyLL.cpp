#include<iostream>
using namespace std;

class Node{
    public:
    int data ;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    // distructor
    ~Node(){
        int value= this->data;
        if(this->next!= NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Memory free for node with data "<<value<<endl;
    }
};

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int getLength(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    
    }
    return cnt;
}

void insertAtHead(Node*& head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insertAtTail(Node*& tail,int d){
    Node* temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}

void insertAtPos(Node*& head ,Node*& tail ,int pos,int d){
    //insert at Start
    if(pos==1){
        insertAtHead(head,d);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }


    // creating a node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void deleteNode(int pos,Node*& head,Node*& tail){
    //deleting first or start node
     if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        // memory free start node
        delete temp;
     }
     else{
        //deleting any middle node or last node
        Node* curr=head;
        Node* prev=NULL;

        int cnt =1;
        while(cnt<pos){
              prev=curr;
              curr=curr->next;
              cnt++;
        }

        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
     }
}


int main(){
    Node* node1 =new Node(10);
    Node* head=node1;
    Node* tail=node1;

    print(head);
    cout<<getLength(head)<<endl;

    insertAtTail(tail,11);
    print(head);
    
    insertAtTail(tail,13);
    print(head);
    
    insertAtTail(tail,8);
    print(head);

    insertAtPos(head,tail,5,5);
    print(head);
    cout<<head<<endl;
    cout<<tail<<endl;
    deleteNode(5,head,tail);
    print(head);
    cout<<head<<endl;
    cout<<tail<<endl;
    return 0;
}