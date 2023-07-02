#include<iostream>
using namespace std;
#include<vector>
vector<int> spiralPrint(int arr[][3],int row ,int col){
    vector<int> ans;
    int count =0;
    int total =row*col;
    int startingRow=0;
    int startingCol =0;
    int endingRow= row-1;
    int endingCol=col-1;

    while(count<total){
        for(int i=startingCol;count<total && i<=endingCol;i++){
            cout<<arr[startingRow][i]<<" ";
            // ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
    
        for(int i=startingRow;count<total && i<=endingRow;i++){
            cout<<arr[i][endingCol]<<" ";
            // ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;

        for(int i=endingCol;count<total && i<=startingCol;i++){
            // cout<<arr[endingRow][i]<<" ";
            // ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--; 

        for(int i=endingRow;count<total && i<=startingRow;i++){
            cout<<arr[i][startingCol]<<" ";
            // ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    spiralPrint(arr,3,3);
    return 0;
}