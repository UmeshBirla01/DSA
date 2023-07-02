//The problem is same as book allocation problem
#include <iostream>
using namespace std;

bool isPossible(int arr[],int n,int m,int mid){
    int painterCount=1;
    int timeSum=0;
    for(int i=0;i<n;i++){
        if(timeSum + arr[i] <= mid){
            timeSum += arr[i];
        }
        else{
            painterCount++;
            if(painterCount > m || arr[i]>mid){
                return false;
            }
            timeSum = arr[i];
        }
    }
    return true;
}

int painterPartion(int arr[], int n,int m){
    int s = 0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid = s + (e - s) / 2;
    int ans=-1;
    while (s <= e)
    {
        if (isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s= mid + 1; 
        }
        mid = s + (e - s) / 2; 
    }

    return ans;
}

int main()
{   
    int arr[4]={5,5,5,5};
    int index = painterPartion(arr,4,2);
    cout << "Minimum time = " << index << endl;

    return 0;
}