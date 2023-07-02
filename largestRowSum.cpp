#include<iostream>
#define INT_MIN (-2147483647 - 1)
using namespace std;
int largestRowSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=-1;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
           sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;
        }

    }
    return rowIndex;
   
}
int main(){
    int arr[3][4]={1,2,3,8,5,21,45,9,7,4,10,11};
    cout<<largestRowSum(arr,3,4);
    return 0;
}