#include<iostream>
using namespace std;

long long int sqrtInt(int n){
    int s = 0,e=n;
    long long int mid = s + (e-s)/2;
    int ans=-1;
    while(s<=e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }

        if(square < n){
            ans = mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

double morePrecision(int n,int precision,int tempSol){
        double factor =1;
        double ans= tempSol;
        for(int i =0;i<precision;i++){
            factor=factor/10;
            for(double j = ans;j*j<n;j=j+factor){
                ans=j;
            }
        }
        return ans;
}
int main(){
    cout<<"Enter the number : "<<endl;
    int num;
    cin>>num;
    long long int tempSol = sqrtInt(num);
    double result = morePrecision(num,3,tempSol);
    cout<<"Answer is : "<<result<<endl;
    
    return 0;
}