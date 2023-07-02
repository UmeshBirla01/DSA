//find largest mid distance such that two aggressive cow will be placed at min conflicting distance 
#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[],int n,int k,int mid){
    int cowCount=1;
    int lastPos=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-lastPos>=mid){
             cowCount++;
             if(cowCount == k){
                return true;
             }
             lastPos=arr[i];
        }
    }
    return false;
}

int aggressiveCow(int arr[],int n,int k){
    sort(arr,arr + n);
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    int e=maxi;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;

}

int main(){
    int stall[]={4,2,1,3,6};
    int result =aggressiveCow(stall,5,2);
    cout<<"Largest min distance : "<<result<<endl;
    
    return 0;
}