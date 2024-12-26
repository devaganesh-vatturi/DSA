#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={0};
    int n=nums.size();
    //Brute force
    // int k=0;
    // for(int i=0; i<n;i++)
    // {
    //     if(nums[i]!=0)
    //     {
    //         nums[k]=nums[i];
    //         k++;
    //     }
    // }
    // for(int i=k;i<n;i++)
    // {
    //     nums[i]=0;
    // }
    int j=-1;
    for(int i=0;i<n;i++)
    {
       if(nums[i]==0)
       {
        j=i;
        break;
       }
    }
    // if (j==-1) return nums;
    for(int i=j+1;i<n;i++)
    {
        if(nums[i]!=0)
        {
            int temp;
            temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            j++;
        }
    }
    for(int i:nums)
    {
        cout<<i<<"\t";
    }
    return 0;
}