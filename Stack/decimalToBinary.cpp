#include<iostream>
#include<cmath>
// #define ull unsigned long long int
using namespace std;


int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0){
        int bit=n&1;
        int power=pow(10,i);
        ans=( bit * power)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}