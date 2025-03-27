// Example 1:
// Input: nums1 = [4,1,2], nums2 = [1,3,4,2]
// Output: [-1,3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
// - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
// Example 2:
// Input: nums1 = [2,4], nums2 = [1,2,3,4]
// Output: [3,-1]
// Explanation: The next greater element for each value of nums1 is as follows:
// - 2 is underlined in nums2 = [1,2,3,4]. The next greater element is 3.
// - 4 is underlined in nums2 = [1,2,3,4]. There is no next greater element, so the answer is -1.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums1={1,3,5,2,4};
    vector <int> nums2={6,5,4,3,2,1,7};
    vector <int> nums3={};
    int j=0;
    for(int i=0;i<nums1.size();i++)
    {
        
        while(j<nums2.size())
        {
            cout<<i<<endl;
            if(nums1[i]==nums2[j])
            {
                if(j==nums2.size()-1)
                {
                    nums3.push_back(-1);
                    break;
                }
                int k;
                for(k=j;k<nums2.size();k++)
                {
                    if(nums2[j]<nums2[k])
                    {
                        nums3.push_back(nums2[k]);
                        break;
                    }
                }
    
                if(k==nums2.size()) nums3.push_back(-1);
                break;
            }
            j++;
        }
        j=0;
    }
    for(int i:nums3)
    {
        cout<<i<<" ";
    }
    return 0;
}
