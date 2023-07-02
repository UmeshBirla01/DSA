#include<iostream>
#include<string>

using namespace std;

string compress(string s){
    int i=0;
    // string ans="";
    int ansIndex=0;
    int n = s.length();
    while(i<n){
        int j=i+1;\
        while(j<n && s[i]==s[j]){
            j++;
        }
        
        s[ansIndex++]=s[i];
        // ans.push_back(ans[ansIndex++]=s[i]);

        int count=j-i;
        if(count>1){
            string cnt = to_string(count);
            for(char ch:cnt){
                s[ansIndex++]=ch;
                // ans.push_back(ans[ansIndex++]=ch);
            }
        }
        i=j;
        if(i==n){
            for(int j=ansIndex;j<n;j++){
                s.pop_back();
            }
            // s[ansIndex]='\0';
        }
        
    }
    
    return s;

}
int main(){
    string s ="aaaaaaaaabbbbbbbbbbbbbbbbbbbbbccccccccccddddddyyyyyyyyyyxxzz";
    cout<<compress(s);
  
    return 0;
}