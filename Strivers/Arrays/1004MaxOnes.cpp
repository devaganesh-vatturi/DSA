// Given a binary array nums and an integer k, return the maximum number of consecutive
//  1's in the array if you can flip at most k 0's.
// Example 1:
// Input: nums = [1,1,1,0,0,0,1,1,1,1,0], k = 2
// Output: 6
// Explanation: [1,1,1,0,0,1,1,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
// Example 2:
// Input: nums = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], k = 3
// Output: 10
// Explanation: [0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1]
// Bolded numbers were flipped from 0 to 1. The longest subarray is underlined.
// Constraints:
// 1 <= nums.length <= 105
// nums[i] is either 0 or 1.
// 0 <= k <= nums.length

#include<bits/stdc++.h>
using namespace std;
int moveZero(vector<int> &nums, int start)
{
    for(int i=start;i<nums.size();i++)
    {
         if(nums[i]==0){ start=i+1; break;}
    }
    return start;
}
int main()
{

    vector<int> nums={0,0,1};
    int k=2,maxi=0;
    int start=0,current=0;
    for(int i=0;i<nums.size();i++)
    {
       current=i;
       if(nums[i]==0&&k>0) k--;
       else if(nums[i]==0 && k==0) {
          start= moveZero(nums,start);
       }
       maxi=max((i-start)+1,maxi);
    }
    cout<<maxi;
    return 0;
}