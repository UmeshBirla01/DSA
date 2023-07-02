//Square Root wihout precision

#include <iostream>
using namespace std;
long long int sqrtInt(int n)
{
    int s = 0, e = n ;
    long long int mid = s + (e - s) / 2; 
    int ans=-1;
    while (s <= e)
    {
        long long int square =mid*mid; //instead of using int only long long is used so that mid*mid will not exceed the range eg num=1000000.                
        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans=mid;
            s = mid + 1; // going to right wala part
        }
        else
        {
            e = mid - 1; // going to left wala part
        }
        mid = s + (e - s) / 2; 
    }

    return ans;
}

int main()
{   
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int index = sqrtInt(n);
    cout << "Square root of num is " << index << endl;

    return 0;
}