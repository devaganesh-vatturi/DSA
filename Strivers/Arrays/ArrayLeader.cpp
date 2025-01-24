#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr={10, 4, 2, 4, 1};
    // vector <int> brr;
    // int n=arr.size(),j;
    // for(int i=0;i<n;i++)
    // {
    //     if(i==n-1)
    //     {
    //         brr.emplace_back(arr[i]);
    //         break;

    //     }
    //    for(j=i+1;j<n;j++)
    //    {
    //       if(arr[i]<arr[j])
    //           break;
    //    }
    //    if(j>=n)
    //       brr.emplace_back(arr[i]);
    // }
    int n=arr.size(),maxi=arr[n-1];
    vector <int> brr;
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=maxi)
            brr.emplace_back(arr[i]);
       maxi=max(arr[i],maxi);
    }
    reverse(brr.begin(),brr.end());
   for(int k:brr)
      cout<<k<<" ";
    return 0;
}