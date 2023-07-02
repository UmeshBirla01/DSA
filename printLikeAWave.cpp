#include<iostream>
using namespace std;
#include<vector>
vector<int> wavePrint(int arr[][2],int row ,int col ){
    vector<int> ans;
    for(int i=0;i<col;i++){
        if(i&1){
            for(int j=row-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
                // ans.push_back(arr[i][j]);
            }
        }
        else{
            for(int j=0;j<row;j++){
                cout<<arr[i][j]<<" ";
                // ans.push_back(arr[i][j]);
            }

        }
    }
    return ans;
}
int main(){
    int arr[2][2]={{1,2},{3,4}};
    wavePrint(arr,2,2);
    return 0;
}