#include<iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans=0;
    for(int i = 0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}

int main(){
    cout<<"Enter no of element want :";
    int size;
    cin>>size;
    int num[100];
    for(int i =0 ;i<size;i++){
        cin>> num[i];
    }
    
    cout <<"The array is ";
    for (int i = 0; i < size; i++)
    {
        cout <<num[i] << " ";
    }
    cout<<endl; 
    int result = unique(num,size);
    cout<<"Unique element is :"<<result;
    return 0;
}