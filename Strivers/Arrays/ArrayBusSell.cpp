// input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> nums={7,1,5,3,6,4};
    int n=nums.size();
    //BRUTE FORCE
    //int max=0,sum=0;
    // vector<int> arr(n-1);
    // for(int i=0;i<n-1;i++)
    // {
    //     arr[i]=nums[i+1]-nums[i];
    // }
    // for(int i=0;i<n-1;i++)
    // {
    //    sum+=arr[i];
    //    if(sum>max)
    //        max=sum;
    //    if(sum<0)
    //        sum=0;    
    // }
    // cout<<max<<endl;
    int mini=nums[0],maxi=0;
    for(int i=1;i<n;i++)
    {
        int price= nums[i]-mini;
        maxi= max(price,maxi);
        mini=min(nums[i],mini);
    }
    cout<<maxi<<endl;
    return 0;
}