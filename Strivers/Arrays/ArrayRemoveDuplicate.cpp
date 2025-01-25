//remove duplicated in array and print unique elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1};
    int i=0;
    int n=nums.size();
    for(int j=0;j<n;j++)
    {
      
        if(j<n-1 && nums[j]==nums[j+1])
        {
         continue;
        }
        nums[i++]=nums[j];
    }
   cout<<i<<endl;
   return 0;
}
