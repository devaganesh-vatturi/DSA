// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".
// Example 1:
// Input: strs = ["flower","flow","flight"]
// Output: "fl"
// Example 2:
// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.
// Constraints:
// 1 <= strs.length <= 200
// 0 <= strs[i].length <= 200
// strs[i] consists of only lowercase English letters if it is non-empty.


#include<bits/stdc++.h>
using namespace std;
string commonPrefix(string str1,string str2)
{
    int i=0;
    int minlen=min(str1.size(),str2.size());
    while( i <= minlen && str1[i]==str2[i])
    {
        i++;
    }
    return str1.substr(0,i);
}
int  main()
{
    vector<string> strs{"flower","flow","flight"};
        //BRUTEFORCE
        // string prefix=strs[0];
        // for(int j=1;j<strs.size();j++)
        // {
        //      prefix= commonPrefix(prefix, strs[j]);
        // }

        sort(strs.begin(),strs.end());
        string prefix=commonPrefix(strs[0],strs[strs.size()-1]);
        cout<<prefix;
    
    return 0;
}