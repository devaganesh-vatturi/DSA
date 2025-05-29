// Example 1:
// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]
// Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
// The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
// Example 2:
// Input: nums1 = [1], m = 1, nums2 = [], n = 0
// Output: [1]
// Explanation: The arrays we are merging are [1] and [].
// The result of the merge is [1].
// Example 3:
// Input: nums1 = [0], m = 0, nums2 = [1], n = 1
// Output: [1]
// Explanation: The arrays we are merging are [] and [1].
// The result of the merge is [1].
// Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.

#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector <int> a={1,2,3,0,0,0};
  vector <int> b={2,5,6};
  int m=3;
  int n=3;
  vector <int> c;
  int g=a.size();
  int p=0,q=0;

  for(int i=m;i<g;i++)
  {
    a[i]=b[p++];
  }
  sort(a.begin(),a.end());
  for(int x:a)
  {
    cout<<x<<" ";
  }
//   if(n!=0)
//   {
//   for(int i=0;i<g;i++)
//   {
//     if(m>0)
//     {
//     if(q>n)
//     {
//         c.push_back(a[p]);
//         p++;
//     }
//     else if(a[p]<=b[q])
//      {
//         c.push_back(a[p]);
//         p++;
//         m--;
//      }
//     else{
//         c.push_back(b[q]);
//         q++;
//      }
//     }
//     else{
//         c.push_back(b[q]);
//         q++;
//     }
//   }
//   for(int z=0;z<c.size();z++)
//   {
//      a[z]=c[z];
//   }
//    }
//   for(int x:a)
//   {
//     cout<<x<<" ";
//   }
  return 0;
}