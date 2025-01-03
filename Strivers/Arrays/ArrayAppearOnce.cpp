//return element that occured only once
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={2,2,1};
    int n=nums.size();
    int c=0;

    for(int i:nums)
    {
        c=c^i;
    }
   
    cout<<c<<endl;

    return 0;
}
