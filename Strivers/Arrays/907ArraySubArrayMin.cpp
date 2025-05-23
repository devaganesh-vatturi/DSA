// Given an array of integers arr, find the sum of min(b), where b ranges over every (contiguous) subarray of arr. Since the answer may be large, return the answer modulo 109 + 7.
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
    int min=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(min==0) min=arr[j];
            else if(arr[j]<min) min=arr[j];
            cout<<min<<" ";
            sum+=min;
            
        }
        min=0;
    }
    cout<<sum<<endl;
    return 0;
}