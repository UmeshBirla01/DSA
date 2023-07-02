#include<iostream>
using namespace std;
//Approach -find then erase
string removePart(string s ,string p){
     while(s.length()!=0 && s.find(p)<s.length()){
        s.erase(s.find(p),p.length());
     }
     return s;
}
int main(){
    string s = "daabcbaabcbc";
    string part ="abc";
    cout<<removePart(s,part);
    return 0;
}