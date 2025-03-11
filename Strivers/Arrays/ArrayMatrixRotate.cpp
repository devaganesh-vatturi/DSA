// Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
// Output: [[7,4,1],[8,5,2],[9,6,3]]
// Example 2:
// Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
// Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> m1(matrix[0].size());
     for(int i=matrix.size()-1;i>=0;i--)
     {
        for(int j=0;j<matrix[i].size();j++)
        {
            // cout<<matrix[i][j];
             m1[j].push_back(matrix[i][j]);
        }
     }

     for(auto p: m1)
     {
        for(auto q:p)
        {
            cout<<q<<"";
        }
        cout<<endl;
     }
    return 0;
}