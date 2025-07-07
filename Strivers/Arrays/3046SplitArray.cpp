#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        map <int,int> mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto& pair:mp)
        {
            if(pair.second >2)
            {
                return false;
            }
        }
        return true;
    }
};