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

    map <int,int>mp;
    int rem;
    for(int i=0;i<nums.size();i++)
    {
        rem=target-nums[i];
        if(mp.find(rem)!=mp.end())
        {
            cout<<mp[rem]<<i<<endl;
        }
        mp[nums[i]]=i;
    }
    
    return 0;
}