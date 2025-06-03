// Example 1:
// Input: rowIndex = 3
// Output: [1,3,3,1]
// Example 2:
// Input: rowIndex = 0
// Output: [1]
// Example 3:
// Input: rowIndex = 1
// Output: [1,1]


///////////////////////NOT DONE YEt
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n=3;
    vector<vector<int>> vec(n+1); 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i+1;j++)
        {
            if(j==0 || j==n)
            {
               vec[i][j]=1;
            }
            else{
                vec[i][j]=vec[i-1][j-1]+vec[i-1][j];
            }
        }
    }
    for(auto z:vec)
    {
        for(int k:z)
        {
            cout<<k<<" ";
        }
        cout<<endl;
    }
}
 