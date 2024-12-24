//remove duplicated in array and print unique elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,3,3,4,4,5,6,7,9};
    int i=0;
    int n=nums.size();
    for(int j=1;j<n;j++)
    {
        if(nums[i]!=nums[j]){
             i++;
             nums[i]=nums[j];
             
        }
    }
  for(int k=0;k<=i;k++)
  {
    cout<<nums[k]<<endl;
  }
   
   return 0;
}
