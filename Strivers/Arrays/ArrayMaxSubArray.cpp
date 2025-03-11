//return maximum sum of a sub array
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={-1};
    int max=INT_MIN,sum=0;
    for(int i=0;i<nums.size();i++)
    {
    sum+=nums[i];
    if(sum>max)
       max=sum;
    if(sum<0)
       sum=0;   
    }
    cout<<max<<endl;
    return 0;
}