#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n){
    int start=0;
    while(start+1 < n){
        swap(arr[start],arr[start+1]);
        start+=2;
        }
       
    

}
void printArray(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl; 
}

int main(){
    int odd[7] = {1, 2, 3, 4, 5, 6,7};
    swapAlternate(odd, 7);
    printArray(odd,7);

    int even[8] = {1, 2, 3, 4, 5, 6,7,8};
    swapAlternate(even, 8);
    printArray(even,8);

    return 0;
}