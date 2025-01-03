//maximum consecutive ones
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={1,0,1,1,0,1};
     int c=0,max=0;
        for(int i:nums)
        {
            if(i==1)
              c+=1;
            else
            c=0; 
            if(max<c)
                max=c; 
        }
        cout<<max<<endl;
    return 0;
}