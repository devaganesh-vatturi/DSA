#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,2,2,2,1,3,4,5,1,2,2};
    int n=nums.size(),maxi=0,maxele;
    map <int,int> mp;
    for(int i:nums)
    {
      mp[i]+=1;


    }
    for(auto it=mp.begin();it!=mp.end();++it){
        if(maxi<it->second)
       {
         maxi=it->second;
         maxele=it->first;
       }
    }
    cout<<maxele<<endl;
    
    return 0;
}