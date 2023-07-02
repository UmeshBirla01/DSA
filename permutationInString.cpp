#include<iostream>
using namespace std;

bool checkEqual(int count1[],int count2[]){
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1,string s2){
    //charater count array
    int count1[26]={0};
    for(int i=0;i<s1.length();i++){
         int index=s1[i]-'a';
         count1[index]++;
    }

    //traverse s2 string in window of size s1 length and compare
    int i=0;
    int windowSize=s1.length();
    int count2[26]={0};

    //running for the first window
    while(i<windowSize && i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        i++;
    }
    if(checkEqual(count1,count2)){
           return 1;
    }

    //aage window process karo
    while(i<s2.length()){
        int index=s2[i]-'a';
        count2[index]++;
        
        index=s2[i-windowSize]-'a';
        count2[index]--;
        i++;
        if(checkEqual(count1,count2)){
           return 1;
        }
    }
    return 0;
}

int main(){
    string s1="d0";
    string s2="eafsdfaid000";
    bool found =checkInclusion(s1,s2);
    if(found){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present"<<endl;
    }
    return 0;
}