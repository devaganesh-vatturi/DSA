// Given string num representing a non-negative integer num, and an integer k, return the
//  smallest possible integer after removing k digits from num.
// Example 1:
// Input: num = "1432219", k = 3
// Output: "1219"
// Explanation: Remove the three digits 4, 3, and 2 to form the new number 1219 which is the smallest.
// Example 2:
// Input: num = "10200", k = 1
// Output: "200"
// Explanation: Remove the leading 1 and the number is 200. Note that the output must not contain leading zeroes.
// Example 3:
// Input: num = "10", k = 2
// Output: "0"
// Explanation: Remove all the digits from the number and it is left with nothing which is 0.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    string num="100200";
    int n=num.size();
    int k=1;
    
    if(n==k)
    {
        cout<<"answer is zero";
    }
    for(int i=0;i<n;i++)
    {
        int ele=num[i]-'0';
        while(!st.empty() && k>0 && ele<st.top())
        {
            st.pop();
            k--;
        }
        st.push(ele);
    }
    while(k>0)
    {
        k--;
        st.pop();
    }
    if(st.empty()){
            cout<<"0"<<endl;
    }
   string newstr="";
    while(!st.empty())
    {
       newstr+= (st.top()+'0');
       st.pop();
    }
    reverse(newstr.begin(),newstr.end());
        while(newstr.size()!=0 && newstr[0]=='0')
        {
            newstr=newstr.substr(1);
        }
    cout<<newstr<<endl;

    return 0;
}