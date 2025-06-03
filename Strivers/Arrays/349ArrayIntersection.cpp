// Example 1:
// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:
// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map <int,int> mp;
    vector <int> nums1={1,2,2,1};
    vector <int> nums2={1,1,2};
    vector <int> nums3;
    for(int i:nums1)
    {
        if(mp.find(i)==mp.end())
        {
            mp.insert({i,1});
        }
    }
    for(int j:nums2)
    {
        if(mp.find(j)!=mp.end())
        {
            if(mp[j]==1)
            {
                nums3.push_back(j);
            }
            mp[j]++;
            
        }
    }
    for(auto z:nums3)
    {
        cout<<z<<" ";
    }
    return 0;;
}