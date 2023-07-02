#include<iostream>
using namespace std;

char getMaxOccurChar(string s){
    int arr[26]={0};
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        int num=ch-'a';
        arr[num]++;
    }
    
    int maxi=-1,ans= 0;
    for(int j=0;j<26;j++){
        if(maxi <arr[j]){
            ans=j;
            maxi=arr[j];
        }
    }
    return ans + 'a';
}
int main(){
    string s = "sheetal";
    cout<<getMaxOccurChar(s);
    return 0;
}