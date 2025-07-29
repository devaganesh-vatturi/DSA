// Given an m x n binary matrix mat, return the distance of the nearest 0 for each cell.
// The distance between two cells sharing a common edge is 1.
// Example 1:
// Input: mat = [[0,0,0],[0,1,0],[0,0,0]]
// Output: [[0,0,0],[0,1,0],[0,0,0]]
// Example 2:
// Input: mat = [[0,0,0],[0,1,0],[1,1,1]]
// Output: [[0,0,0],[0,1,0],[1,2,1]]
 
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> mat={{0,0,0,0},{1,1,1,0},{1,1,1,0},{1,1,1,1}};
    // vector<vector<int>> mat={{1,1,1,1},{1,1,1,0}};
    int n=mat.size();
    int m=mat[0].size();
     vector<vector<int>> visited(n,vector<int> (m,0));
    queue <pair<pair<int,int>,int>> qu;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0){
              qu.push({{i,j},0});
              visited[i][j]=1;
            }
        }
    }
    int nrow[]={-1,1,0,0};
    int ncol[]={0,0,-1,1};
    while(!qu.empty())
    {
         int r=qu.front().first.first;
         int c=qu.front().first.second;
         int d=qu.front().second;
         qu.pop();
         for(int i=0;i<4;i++){
            int newrow= r+ nrow[i];
            int newcol=c+ncol[i];
            if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && visited[newrow][newcol]==0
                && mat[newrow][newcol]==1)
            {
                visited[newrow][newcol]=1;
                 qu.push({{newrow,newcol},d+1});
                 mat[newrow][newcol]=d+1;
            }

         }
    }
    for(auto submat:mat)
    {
        for(auto value:submat)
        {
            cout<<value<<" ";
        }
        cout<<endl;
    }
    return 0;
}
