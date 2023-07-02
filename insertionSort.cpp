#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(temp <= arr[j]){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main()
{
    // int arr[6] = {10, 1, 7, 6, 14, 9}; 
    int arr[13]={2,5,1,67,45,13,16,10,3,6,99,34,56};
    int n = 13 ;
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}