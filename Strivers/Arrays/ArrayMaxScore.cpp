#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> arr={4, 3, 1, 5, 6};
    int n=arr.size();
        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum=max(sum,arr[i-1]+arr[i]);
        }
        cout<<sum<<endl;
}