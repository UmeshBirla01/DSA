#include <iostream>
using namespace std;
int getPivot(int arr[], int n)
{
    int start = 0, end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; 
    while (start < end)
    {
        
        if (arr[mid]>=arr[0])
        {
            start = mid + 1; // going to right wala part
        }
        else
        {
            end = mid; // going to left wala part
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main()
{
    int arr[5] = {3,8,10,17,1};

    cout << "hello" << endl;
    int index = getPivot(arr, 10);
    cout << "Pivot is : " << index << endl;

    return 0;
}