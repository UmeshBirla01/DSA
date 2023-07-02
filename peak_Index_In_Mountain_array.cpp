#include <iostream>
using namespace std;
int peakIndex(int arr[], int n)
{
    int start = 0, end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; 
    while (start < end)
    {
        
        if (arr[mid]<arr[mid+1])
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
    int arr[10] = {11, 15, 18, 19,14,12,11,9,1,5};

    cout << "hello" << endl;
    int index = peakIndex(arr, 10);
    cout << "Peak index in sort array : " << index << endl;

    return 0;
}