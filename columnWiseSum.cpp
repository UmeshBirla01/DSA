#include<iostream>
using namespace std;
void rowWiseSum(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum=0;
        for(int j=0;j<row;j++){
           sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
   
}
int main(){
    int arr[3][4]={1,2,3,8,5,21,45,9,7,4,10,11};
    rowWiseSum(arr,3,4);
    return 0;
}