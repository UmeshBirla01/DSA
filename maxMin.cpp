#include <iostream>
using namespace std;
#define INT_MAX 2147483647
#define INT_MIN (-2147483647 - 1)

int getMax(int num[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] > maxi)
        // {
        //     maxi = num[i];
        // }
        maxi =max(maxi,num[i]);
    }
    // returning max value
    return maxi;
}

int getMin(int num[], int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (num[i] < mini)
        // {
        //     mini = num[i];
        // }
        mini=min(mini,num[i]);
    }
    // returning max value
    return mini;
}
int main()
{   cout<<"Hello"<<endl;
    int size;
    cin >> size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout<< num[i]<<" ";
    }
    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}