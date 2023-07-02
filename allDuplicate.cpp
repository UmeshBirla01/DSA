#include <iostream>
using namespace std;

int  duplicate(int arr[], int n)
{
    int ans = 0;
    //XOR ing all array element
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    

    //XOR ing [1,n-1]
    for (int i = 1; i <= n ; i++)
    {   
        ans = ans ^ i;
    }
    
    return ans
}

void printArray(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl; 
}

int main()
{
    int arr[8] = {4,3,2,7,8,2,3,1};
    printArray(arr,8);
    int result= duplicate(arr, 8);
    printArray(arr,8);
    cout<<"Result : "<<result;
    return 0;
}