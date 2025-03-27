// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Example 2:
// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i=0,j=0;
    vector <vector<int>> matrix={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector <int> ar1;
    vector <int> ar2;
    for( i=0;i<matrix.size();i++)
    {   
        for(j=0;j<matrix[i].size();j++)
        {
            if(matrix[i][j]==0)
            {
                ar1.push_back(i);
                ar2.push_back(j);
            }
        }
    }
    for(int k:ar1)
    {
        for(int l=0;l<matrix[k].size();l++)
        {
              matrix[k][l]=0;
        }
    }
    for(int p:ar2)
    {
      for(int q=0;q<matrix.size();q++)
      {
        for(int r=0;r<matrix[q].size();r++)
        {
            if(r==p)
            {
                matrix[q][r]=0;
            }
        }
      }
    }
    
   for(auto p:matrix)
   {
      for(auto q: p)
      {
        cout<<q<<" ";
      }
   }
    return 0;
}