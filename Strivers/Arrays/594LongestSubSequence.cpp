// We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

// Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.
// Example 1:
// Input: nums = [1,3,2,2,5,2,3,7]
// Output: 5
// Explanation:
// The longest harmonious subsequence is [3,2,2,2,3].
// Example 2:
// Input: nums = [1,2,3,4]
// Output: 2
// Explanation:
// The longest harmonious subsequences are [1,2], [2,3], and [3,4], all of which have a length of 2.
// Example 3:
// Input: nums = [1,1,1,1]
// Output: 0
// Explanation:
// No harmonic subsequence exists.

#include<bits/stdc++.h>
using namespace std;
int main()
{

    map <int,int> mp;
    vector <int> nums={1,3,2,2,5,2,3,7};   
    int maxseq=0;
    for(int i:nums)
    {
        mp[i]++;
    }

    for(auto& [key, val] : mp)
    {
        if(mp.find(key+1)!=mp.end())
        {
            maxseq= max(maxseq,(val+ mp[key+1]));
        }
    }
    cout<<maxseq;
    return 0;

}