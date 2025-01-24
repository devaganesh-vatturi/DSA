#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={0,3,7,2,5,8,4,6,0,1};
    int n=nums.size(),c=1,maxi=0;
    map <int,int> mp;
    for(int i=0;i<n;i++){
        mp.emplace(nums[i],0);
    }
    for(auto a:mp)
    {
        if(mp.find(a.first+1)!=mp.end())
        {
            c+=1;
        }
        else{
            c=0;
        }
        maxi=max(c,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}