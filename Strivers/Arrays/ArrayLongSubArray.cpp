#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr={7,220,174,-670,-551,-708,-438,901,738,-741,-491,-961,7,220,174,-670,-551,-708,-438,901,738,-741,-491,-961};
   int max=0,a,k=-554;
  int n=arr.size();
   for(int i=0;i<n;i++)
   {
    a=arr[i];
   
    for(int j=i+1;j<n;j++)
    {
        
       a+=arr[j];
        
       if(a==k)
       {
        
        if(max<(j-i)+1 || max==0)
        {
           max=(j-i)+1;
           cout<<arr[i]<<" "<<arr[j]<<" a="<<a<<" max="<<max<<endl;
        }
       }
    }
   }
  if(max==0)
    for(int x: arr)
        if(x==k)
            max=1;
  cout<<max<<endl;  
    return 0;
}
