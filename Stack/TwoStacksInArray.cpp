#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
    int size,top1,top2, *arr;

    public:
        TwoStack(int s){
            this->size=s;
            top1=-1;
            top2=s;
            arr = new int[s];
        }

        void push1(int num){
            if(top2-top1>1){
                top1++;
                arr[top1]=num;
            }
            else{
                cout<<"Overflow"<<endl;
            }
        }

        void push2(int num){
            if(top2-top1>1){
                top2--;
                arr[top2]=num;
            }
            else{
                cout<<"Overflow"<<endl;
            }
        }

        int pop1(){
            if(top1>=0){
                int ans=arr[top1];
                top1--;
                return ans;
            }
            else{
                return -1;
            }
        }

        int pop2(){
            if(top2<size){
                int ans=arr[top2];
                top2++;
                return ans;
            }
            else{
                return -1;
            }
        }
};
int main(){
    TwoStack st(4);
    st.push1(1);
    st.push2(2);
    st.push1(3);
    st.push2(4);
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    cout<<st.pop1()<<endl;
    return 0;
}