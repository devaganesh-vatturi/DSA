// Given an array of integers nums and an integer k, return the total number of subarrays
//  whose sum equals to k.
// A subarray is a contiguous non-empty sequence of elements within an array.
// Example 1:
// Input: nums = [1,1,1], k = 2
// Output: 2
// Example 2:
// Input: nums = [1,2,3], k = 3
// Output: 2


#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={1,1,1};
    int k=2;
    map <int,int> mp;
       mp.insert({0,1});
       int cnt=0,prefixsum=0;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
         prefixsum+=nums[i];
         int val= prefixsum-k;
         if(mp.find(val)!=mp.end())
         {
            cnt+=mp[val];
         }
         mp[prefixsum]++;
       }
       cout<<"the count is"<<cnt;
}