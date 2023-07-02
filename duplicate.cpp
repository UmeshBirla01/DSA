#include <iostream>
using namespace std;

int duplicate(int arr[], int n)
{
    int ans = 0;
    //XOR ing all array element
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    //XOR ing [1,n-1]
    for (int i = 1; i < n ; i++)
    {
        ans = ans ^ i;
    }
    
    return ans;
}
int main()
{
    int arr[6] = {1, 2, 2, 3, 4, 5};
    int result=duplicate(arr, 6);
    cout<<"Result : "<<result;
    return 0;
}