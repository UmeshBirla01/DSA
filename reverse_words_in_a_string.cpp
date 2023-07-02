#include<iostream>
#include<string.h>
using namespace std;
string reverse(string s){
    int st = 0,e=s.length()-1;
    while(st<=e)
    {
        swap(s[st++],s[e--]);
    }
    
    return s;
}
string revString(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]==' ' || s[i]=='\0'){
            reverse(s);
        }
    }
}

int main(){
    string s = "umesh is a good boy";
    cout<<s<<endl;
    cout<<reverse(s)<<endl;
    //cout<<s<<endl;
    
    return 0;
}