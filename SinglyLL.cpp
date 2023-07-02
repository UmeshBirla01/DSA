// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//      //  unordered_map<int,vector<int>> m;
//         unordered_map<int,int>mp;
//         vector<int>ans(2);
//         int a;
//         int b;
//         for(int i=0; i<nums.size();i++){
//             if(mp[target-nums[i]]>0){
//                 a=i;
//             break;}
//             else mp[nums[i]]++;
//         }
//         for(int i=0;i<nums.size();i++)
//             if(nums[i]==target-nums[a] && i!=a)
//                 b=i;
        
//         ans[0]=b;
//         ans[1]=a;
//      /* for(int i=0;i<nums.size();i++)
//         { m[nums[i]].push_back(i+1);
//         }
    
//         for(int i=0;i<nums.size();i++) {
//             if(m[target-nums[i]]>0 && m[nums[i]]!=m[target-nums[i]])
                
//             {
//                 ans.push_back(m[nums[i]]-1);
//                 ans.push_back(m[target-nums[i]]-1);
//             break;}
//         }*/
//         return ans;
//     }
// };

// C++ program to illustrate the
// unordered_set::find() function
 
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

void insertAtHead(Node*& head,int d){
    // new node create
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node*& tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node*& head,Node*& tail,int pos,int d){

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
    temp->next=nodeToInsert;
}
void print(Node*& head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(int pos,Node*& head,Node*& tail){
    //deleting first or start node
     if(pos==1){
        Node* temp=head;
        head=head->next;
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

        prev->next=curr->next;
        tail=prev;
        curr->next=NULL;
        delete curr;
     }
}

int main(){
    // created a new node
    Node* node1 = new Node(10);
    // cout<<node1 ->data<<endl;
    // cout<<node1 ->next<<endl;
    
    // head pointed to new node
    Node* head=node1;
    Node* tail=node1;
    print(head);
    // cout<<head<<endl;
    // cout<<tail<<endl;

    insertAtTail(tail,12);
    print(head);
    // cout<<head<<endl;
    // cout<<tail<<endl;

    insertAtTail(tail,15);
    print(head);
    cout<<head<<endl;
    // cout<<tail<<endl;
    
    insertAtPosition(head,tail,1,19);
    print(head); 
    cout<<head<<endl;
    cout<<tail<<endl;

    insertAtPosition(head,tail,5,19);
    print(head);
    cout<<head<<endl;
    cout<<tail<<endl;

    deleteNode(5,head,tail);
    print(head);
    cout<<head<<endl;
    cout<<tail<<endl;
    return 0;
}