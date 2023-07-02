#include<iostream>
#include<stack>
using namespace std;


class Stack{
    public:
        int *arr;
        int top;
        int size;
    
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack is Overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack is Underflow"<<endl;
        }
    }

    bool empty(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        else{
            cout<<"Stack is not empty"<<endl;
        }
    }

    int peek(){
        if(top >=0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
};
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(5);
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;
    st.empty();
    st.pop();
    cout<<st.peek()<<endl;

    st.pop();
    cout<<st.peek()<<endl;

    st.empty();
        
    
    return 0;
}