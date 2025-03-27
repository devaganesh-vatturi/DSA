// Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "()[]{}"
// Output: true
// Example 3:
// Input: s = "(]"
// Output: false
// Example 4:
// Input: s = "([])"
// Output: true

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="[][";
    stack <char> st;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            
            st.push(s[i]);
        }
        else 
        {
            if(st.size()==0){cout<<"false";}//input=']]]]]]'
            c+=1;
           if(s[i]==')'&&st.top()=='(')
           {
                st.pop();
           }
           else if(s[i]==']'&&st.top()=='[')
           {
                st.pop();
           }
           else if(s[i]=='}'&&st.top()=='{')
           {
                st.pop();
           }
           else{
            cout<<"false";
           }
        }
       
    }
    if(st.size()!=0){cout<<"false";}//input='[]['
    if(c==0){cout<<"false";}//input='[[[[['
    cout<<"true";
    return 0;
}