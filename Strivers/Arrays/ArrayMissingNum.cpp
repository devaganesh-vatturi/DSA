#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={1};
    int n=nums.size();
    vector <int>  arr(n+1);
    for(int i=0;i<n+1;i++)
    {
        arr[i]=0;
    }
    for(int i:nums)
    {
       arr[i]+=1;
    }
    for(int i=1;i<n+1;i++)
    {
        if(arr[i]==0)
        {
            cout<<i<<endl;
            break;
        }
        
    }
    cout<<"0"<<endl;
    return 0;
}