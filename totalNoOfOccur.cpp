//Total Number of occurence of any no in sorted array
#include <iostream>
using namespace std;
int firstOccur(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int ans=-1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // we are using this because at the wrost case it may
    while (start <= end)                 // happen -the sum of (start+end)  may exceed int range.
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end =mid -1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1; // going to right wala part
        }
        else
        {
            end = mid - 1; // going to left wala part
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}

int lastOccur(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int ans=-1;
    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; // we are using this because at the wrost case it may
    while (start <= end)                 // happen -the sum of (start+end)  may exceed int range.
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start =mid +1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1; // going to right wala part
        }
        else
        {
            end = mid - 1; // going to left wala part
        }
        mid = start + (end - start) / 2;
    }

    return ans;
}
int main()  
{
    int arr[6] = {1,3,3,4,4,6};

    cout << "hello" << endl;
    int index1 =firstOccur(arr, 6, 4);
    int index2 =lastOccur(arr, 6, 4);
    cout << "Total No Of Occurence Of element 4 : " << index2 - index1 +1 << endl;
   

    return 0;
}