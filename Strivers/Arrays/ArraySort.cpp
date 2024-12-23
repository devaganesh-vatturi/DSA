//sort array, rotational sorting also
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> n= {8,2,3,4};
    int c=0;
    for(int i=0;i<n.size()-1;i++)
    {
        if(n[i]>n[i+1])
        {
            c+=1;
        }
    }
    if(n.back()>n[0])
    {
        c+=1;
    }
    c<=1 ? cout<<"sorted" : cout<<"unsorted" ;
    return 0;
}