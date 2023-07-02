#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // we are using this because at the wrost case it may
    while (start <= end)                 // happen -the sum of (start+end)  may exceed int range.
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1; // going to right wala part
        }
        else
        {
            end = mid - 1; // going to left wala part
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{
    int arr[10] = {11, 15, 18, 19, 25, 30, 34, 36, 40, 45};

    cout << "hello" << endl;
    int index = binarySearch(arr, 10, 40);
    cout << "Index of 40 is " << index << endl;

    return 0;
}