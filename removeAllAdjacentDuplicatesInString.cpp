#include <iostream>
using namespace std;
// string recurse(string s);
string remAllAdjDuplicates(string s)
{
    int i = 0;
    int ansIndex = 0;
    int n = s.length();
    while (i <= n)
    {
        int j = i + 1;
        while (j < n && s[i] == s[j])
        {
            j++;
            if (s[i] != s[j])
            {
                i = j;
            }
        }

        s[ansIndex++] = s[i];
        i = j;
        
    }
   
    return s; 
}
// string recurse(string s){
//     string s1 ;
//     remAllAdjDuplicates(s); 
    
    
//     return s1;  
// }
int main()
{
    string s = "abbaca";
    cout<<remAllAdjDuplicates(s);
    
    // cout<<recurse(s);
    return 0;
}