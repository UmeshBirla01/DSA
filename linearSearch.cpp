#include<iostream>
using namespace std;
bool linearSearch(int arr[] , int n, int key){
     for(int i =0; i<n ; i++){
          if(arr[i]==key){
            return 1;
          }
     }
     return 0;
}

int main(){
    int arr[10]= {5,7,-2,10,22,-2, 0 ,5, 22, 1};
    
    cout<<"Enter Element you want to Search ";
    int element;
    cin>>element;
    bool found = linearSearch(arr,10,element);

    if (found){
         cout<<"Key is Present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
    
    return 0;
}