#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;//by ignoring this statement and outer swap statement we can also use swap(arr[j],arr[minIndex]);
                //swap(arr[j],arr[minIndex]);
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main(){
    int arr[13]={2,5,1,67,45,13,16,10,3,6,99,34,56};
    selectionSort(arr,13);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}