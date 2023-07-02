#include<iostream>
using namespace std;

bool search(int arr[][4],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(key == arr[i][j]){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    int arr[3][4]={1,2,3,8,5,21,45,9,7,4,10,11};
    bool found=search(arr,3,4,88);
    if(found){
        cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is Not Present"<<endl;
    }
    return 0;
}