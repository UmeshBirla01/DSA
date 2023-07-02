#include<iostream>
using namespace std;
void sort01(int a[],int n){
    int i =0;
    int j =n-1;
    while(i<=j){
        if(a[i]==1 && a[j]==0){                //note using while block instead of if block 
               swap(a[i],a[j]);                //then (i<j) must be hold with each condition.
               i++; j--;
        }
        else if(a[i]==0){
            i++;
        }
        else if(a[j]==1){
            j--;
        }
    }
    for(int k=0;k<n;k++){
        cout<<a[k]<<" ";
    }
}
int main(){
      int arr[8] = {1,1,0,0,0,0,1,0};
      sort01(arr,8);
    return 0;
}