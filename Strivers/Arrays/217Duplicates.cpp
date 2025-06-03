// Example 1:
// Input: nums = [1,2,3,1]
// Output: true
// Explanation:
// The element 1 occurs at the indices 0 and 3.
// Example 2:
// Input: nums = [1,2,3,4]
// Output: false
// Explanation:
// All elements are distinct.
// Example 3:
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true

#include<bits/stdc++.h>
using namespace std;
int main()
{
     unordered_map <int,int> maps;
     vector <int> nums={1};

     for(int i:nums)
     {
        if(maps.find(i) == maps.end())
        {
            maps.insert({i,1});
        }
        else{
            cout<<"contain duplicates";
        }
     }
     cout<<"No duplicates";
    return 0;
}