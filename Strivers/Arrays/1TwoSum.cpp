#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={3,2,4};
    int target=6;
    //BRUTE FORCE
    // int sum;
    // int n=nums.size();
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         sum=nums[i]+nums[j];
    //         if(sum == target)
    //             cout<<i<<j<<endl;
    //     }
    // }

    //BETTER APPROACH
    // map <int,int>mp;
    // int rem;
    // for(int i=0;i<nums.size();i++)
    // {
    //     rem=target-nums[i];
    //     if(mp.find(rem)!=mp.end())
    //     {
    //         cout<<mp[rem]<<" "<<i<<endl;
    //     }
    //     mp[nums[i]]=i;
    // }
    

    //WITHOUT MAP

    sort(nums.begin(),nums.end());
    vector<pair<int,int>> duovec;
    int left=0,right=nums.size()-1;
    while (left<right)
    {
        int val=nums[left]+nums[right];
        if(val==target)
        {
            cout<<left<<" "<<right<<endl;
            break;
        }
        else if(val>left)
        {
            right--;
        }
        else{
            left++;
        }
     }
     cout<<"not found";
    return 0;
}