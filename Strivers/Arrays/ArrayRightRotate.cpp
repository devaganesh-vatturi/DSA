// rotate array to right side by given k value of a vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k=2;
    vector<int> nums={-1};
    int n=nums.size();
    //brute force
    // for(int i=0;i<k;i++)
    // {
    //     int min=nums[n-1];
    //     for(int j=n-1;j>=1;j--)
    //     {
    //         nums[j]=nums[j-1];
    //     }
    //     nums[0]=min;
       
    // }
     
    // for(int x:nums)
    // {
    //     cout<<x<<"\t";
    // }
    k %= n;
    reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());

     for(int x:nums)
    {
        cout<<x<<"\t";
    }
    return 0;
}