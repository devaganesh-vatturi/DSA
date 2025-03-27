// Example 1:
// Input: s = "abc", t = "ahbgdc"
// Output: true
// Example 2:
// Input: s = "axc", t = "ahbgdc"
// Output: false
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="aza";
    string t="abzba";
    int n=0,c=0;
    for(int i=0;i<s.size();i++)
    {
       for(int j=n;j<t.size();j++)
       {
        cout<<s[i]<<" "<<t[j]<<endl;
       
        if(s[i]==t[j])
        {
            
           
            n=j+1;
            c+=1;
            cout<<i<<" "<<j<<" "<<n<<endl;
            break;
        }
       }
    }
   
    if(c<s.size()) cout<<"false";
    else cout<<"true";

}
    
    
