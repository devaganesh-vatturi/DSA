// Example 1:
// Input: nums = [1,2,1]
// Output: [2,-1,2]
// Explanation: The first 1's next greater number is 2; 
// The number 2 can't find next greater number. 
// The second 1's next greater number needs to search circularly, which is also 2.
// Example 2:
// Input: nums = [1,2,3,4,3]
// Output: [2,3,4,-1,4]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={1,2,3,4,3};
    vector <int>vec1;
    for(int i=0;i<nums.size();i++)
    {
        bool pushed=false;
        for(int j=i+1;j<nums.size();j++)
        {
            if(nums[j]>nums[i])
            {
                vec1.push_back(nums[j]);
                pushed=true;
                break;
            }
        }
        if(!pushed)
        {
            for(int k=0;k<i;k++)
            {
                if(nums[k]>nums[i])
                {
                vec1.push_back(nums[k]);
                pushed=true;
                break;
                }
            }
        }
        if(!pushed)
        {
            vec1.push_back(-1);
        }
    }
    for(auto i:vec1)
    {
        cout<<i<<endl;
    }
    return 0;
}