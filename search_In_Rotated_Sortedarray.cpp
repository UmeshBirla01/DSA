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

int binarySearch(int arr[],int s,int e, int key)
{
    int start = s, end = e;
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
    int arr[5] = {7,9,1,2,3};
    int key =9 ;
    int found;
    cout << "hello" << endl;
    int pivot = getPivot(arr, 5);
    
    if(arr[pivot]<= key && key<=arr[4])
    {//BS on second line
         found = binarySearch(arr,pivot,4,key);
    }
    else
    {//BS on first line
         found = binarySearch(arr,0,pivot-1,key) ;
    }
    cout << "Pivot is : " <<pivot<<endl<<"The key is : "<<arr[found]<<" at index "<<found<< endl;

    return 0;
}   
