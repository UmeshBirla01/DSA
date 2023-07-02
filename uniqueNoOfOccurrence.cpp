#include<iostream>
using namespace std;

bool uniqueOccur(int arr[],int n){
    

int main(){
    int arr1[6] = {1, 2, 2, 1, 1, 3};
    int arr2[7] = {1, 2, 2, 1, 1, 3, 3};

    bool isUnique1 = uniqueOccur(arr1,6);
    //bool isUnique2 = uniqueOccur(arr1,7);

    if(isUnique1){
         cout<<"True"<<endl;
    }
    else{
         cout<<"False"<<endl;
    }
    return 0;
}