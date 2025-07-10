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
  set <int> sets;
  string s="abcabcbb";
  int r=0,l=0;
  int maxi=0;
  while(r<s.size())
  {
    if(sets.find(s[r])!=sets.end())
    {
        while(s[r]!=s[l]){
           
            sets.erase(s[l]);
            l++;
        }
        sets.erase(s[l]);
        l++;
    }
   sets.insert({s[r]});
   
   maxi=max(maxi,((r-l)+1));
    r++;
      

  }
  cout<<maxi<<" ";
}