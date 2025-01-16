//sort 0's,1's,2's
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={2,0,1};
    int n=nums.size();

    //BRUTE FORCE
    //int temp;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //        if(nums[i]>nums[j])
    //        {
    //          temp=nums[i];
    //          nums[i]=nums[j];
    //          nums[j]=temp;
    //        }
    //     }
    // }
    // for(int i:nums)
    // {
    //     cout<<i<<endl;
    // }

   int low=0,mid=0,high=n-1;
   while(mid<=high)
   {
    if(nums[mid]==0)
    {
        swap(nums[mid],nums[low]);
        low++;mid++;
    }
    else if(nums[mid]==1)
    {
        mid++;
    }
    else if(nums[mid]==2)
    {
        swap(nums[mid],nums[high]);
        high--;
    }
      for(int j:nums)
   {
    cout<<j<<" ";
   }
   cout<<endl;
   }
//    for(int i:nums)
//    {
//     cout<<i<<" ";
//    }
    return 0;
}