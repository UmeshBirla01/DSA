#include<iostream>
using namespace std;

int sumArray(int arr[],int n){
    int sum =0;
    for(int i =0 ;i<n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int size;
    cin>>size;

    int num[100];
    for(int i =0 ;i<size;i++){
        cin>> num[i];
    }
    int result = sumArray(num,size);
    cout<<"Sum Of The Array is :"<<result;
    
    return 0;
}