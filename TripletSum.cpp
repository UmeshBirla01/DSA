#include <iostream>
using namespace std;

int main()
{
    
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            for (int k = i + 2; k < 5; k++)
            {
                if ((arr[i] + arr[j] + arr[k] == 12) && (arr[i]!=arr[j]) && (arr[j]!=arr[k] )&& (arr[k]!=arr[i]))
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
                
            }
            
        }
        
    }
    return 0;
}