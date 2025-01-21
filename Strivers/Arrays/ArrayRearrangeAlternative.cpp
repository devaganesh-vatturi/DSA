#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={3,1,-2,-5,2,-4};
    int n=nums.size();
    vector <int> arr(n);
    int j=n-1,i=0;
    for(int z=0;z<n;z++)
    {
        if(nums[z]>0)
            arr[i++]=nums[z];
            
        else
        {
            arr[j--]=nums[z]; 
        }        
                 
    }
    i=0,j=n-1;
    for(int z=0;z<n;z++)
    {
       if(z%2==0){
        nums[z]=arr[i++];
       }
       else{
        nums[z]=arr[j--];
       }
    }
    for(int x:nums)
      cout<<x<<" ";     
    return 0;
}