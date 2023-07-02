#include <iostream>
using namespace std;

void sort012(int a[], int n)
{
    int low = 0,  high = n - 1 ,mid = 0;

    while (mid <= high)
    {
        if (a[mid] == 0)
        {
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else if (a[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(a[high], a[mid]);
            high--;
        }
        
    }
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
}

int main()
{
    int arr[9] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    for (int k = 0; k < 9; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;
    sort012(arr, 9);
    return 0;
}