// Example 1:
// Input: s = "1 + 1"
// Output: 2
// Example 2:
// Input: s = " 2-1 + 2 "
// Output: 3
// Example 3:
// Input: s = "(1+(4+5+2)-3)+(6+8)"
// Output: 23

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="(1+(4+5+2)-3)+(6+8)";
    stack <string> st;
    for(int i=0;i<s.size();i++)
    {
      if(s[i]==' ') continue;
      else if(s[i]!=')') st.push(string(1,s[i]));
      
    }
   
    

}