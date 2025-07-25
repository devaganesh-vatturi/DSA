// You are given a 0-indexed array of integers nums of length n. You are initially positioned at nums[0].
// Each element nums[i] represents the maximum length of a forward jump from index i. 
// In other words, if you are at nums[i], you can jump to any nums[i + j] where:
// 0 <= j <= nums[i] and
// i + j < n
// Return the minimum number of jumps to reach nums[n - 1]. The test cases are generated such that you can reach nums[n - 1].
// Example 1:
// Input: nums = [2,3,1,1,4]
// Output: 2
// Explanation: The minimum number of jumps to reach the last index is 2. Jump 1 step from index 0 to 1, then 3 steps to the last index.
// Example 2:
// Input: nums = [2,3,0,1,4]
// Output: 2

#include<bits/stdc++.h>
using namespace std;
int jumpOnce(vector<int> nums, int numind)
{
    if(nums[numind]>nums.size()-numind)
    {
        return nums.size();
    }
    cout<<"incoming"<<numind;
  int jumpind=numind+1;
  int maxi=0;
  for(int i=numind+1;i<=numind+(nums[numind]);i++)
  {
    
     if(nums[i]>=maxi)
     {
        maxi=nums[i];
        jumpind=i;
        cout<<"maxi"<<maxi<<" "<<endl;
     }
  }
//   cout<<"jumpind"<<jumpind<<endl;
   if(nums[numind]>jumpind) return nums[numind];
  return jumpind;

}
int main()
{
    vector<int> nums={4, 1, 1, 3, 1, 1, 1};
    int n=nums.size();
    int i=0,jump=0;
    while(i<n-1)
    {
          jump++;
          i=jumpOnce(nums,i);
    }
    cout<<jump;
}