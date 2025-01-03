#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> a={1,1,1,1,1};
    vector <int> b={2,2,2,2,2};
    vector <int> c;
    int n1=a.size();
    int n2=b.size();
    int x=0,y=0;
    while(x<n1 && y<n2)
    {
        // cout<<"a[x]"<<a[x]<<"b[y]"<<b[y]<<endl;
        if(a[x]<=b[y])
        {
            if(c.empty() || c.back()!=a[x])
            {
                // cout<< "a[x]"<<a[x]<<"b[y]"<<b[y]<<endl;
                
            c.push_back(a[x]);
            }
            x++;
        }
        else
        {
            if(c.empty() || c.back()!=b[y])
            {
                 c.push_back(b[y]);
                

            }
             y++;
           
        }
    }
    while(x<n1)
    {
        if(c.empty() || c.back()!=a[x])
        {
            c.emplace_back(a[x]);
            
        }
        x++;
    }
    while(y<n2)
    {
       if(c.empty() || c.back()!=b[y]){
        c.emplace_back(b[y]);
       
       }
        y++;
    }
    
    for(int it:c)
    {
        cout<<it<<" ";
    }
    return 0;
}