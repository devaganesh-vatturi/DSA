// Example 1:
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <char,int> mp;
    int p=0,q=0,ind=0,len=0,maxi=0;
    string s="tmmzuxt";
    for(char c:s)
    {
        if(mp.find(c)==mp.end())
        {
            mp.insert({c,ind});
            ind++;q++;
            len=q-p;
        }
        else if(p<mp[c]){
                q++;ind++;
                p=mp[c]+1;
                mp[c]=ind;
                len=q-p;
           
        }
        maxi=max(maxi,len);
    }
    cout<<maxi<<endl;
    return 0;
}