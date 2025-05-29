// Example 1:
// Input: arr = [3,1,2,4]
// Output: 17
// Explanation: 
// Subarrays are [3], [1], [2], [4], [3,1], [1,2], [2,4], [3,1,2], [1,2,4], [3,1,2,4]. 
// Minimums are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1.
// Sum is 17.
// Example 2:
// Input: arr = [11,81,94,43,3]
// Output: 444

#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> arr={11,81,94,43,3};
    int n=arr.size();

    //BRUTE FORCE:
    // int sum=0;
    // int mini;
    // for(int i=0;i<n;i++)
    // {
    //     mini=arr[i];
    //     for(int j=i;j<n;j++)
    //     {
    //        mini=min(mini,arr[j]);
    //        sum+=mini;
    //     }
    // }
   
    return 0;
}