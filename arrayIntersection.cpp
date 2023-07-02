#include <iostream>
using namespace std;
void intersect(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
}
int main()
{
    int a[4] = {1, 2, 3, 4};//arrays must be sorted 
    int b[2] = {3, 4};      //arrays must be sorted 
    intersect(a, b, 4, 2);
    return 0;
}