// You are given an m x n matrix board containing letters 'X' and 'O', capture regions that are surrounded:
// Connect: A cell is connected to adjacent cells horizontally or vertically.
// Region: To form a region connect every 'O' cell.
// Surround: The region is surrounded with 'X' cells if you can connect the region with 'X' cells and none of the region cells are on the edge of the board.
// To capture a surrounded region, replace all 'O's with 'X's in-place within the original board. You do not need to return anything.
// Example 1:
// Input: board = [["X","X","X","X"],["X","O","O","X"],["X","X","O","X"],["X","O","X","X"]]
// Output: [["X","X","X","X"],["X","X","X","X"],["X","X","X","X"],["X","O","X","X"]]
// Explanation:
// In the above diagram, the bottom region is not captured because it is on the edge of the board and cannot be surrounded.
// Example 2:
// Input: board = [["X"]]
// Output: [["X"]]

#include<bits/stdc++.h>
using namespace std;
void senddfs(vector<vector<char>>& board,vector<vector<int>> &visited,int r,int c)
{
     int n=board.size();
    int m=board[0].size();
    visited[r][c]=1;
    int nrow[]={-1,1,0,0};
    int ncol[]={0,0,1,-1};
    for(int i=0;i<4;i++)
    {
        int newrow=r+nrow[i];
        int newcol=c+ncol[i];
        if(newrow>=0 && newrow<n && newcol>=0 && newcol<m&& visited[newrow][newcol]==0 && 
            board[newrow][newcol]=='O')
            {
                visited[newrow][newcol]=1;
                senddfs(board,visited,newrow,newcol);
            }
    }
    return;
}
int main()
{
    vector<vector<char>> board={{'X', 'X', 'X', 'X','X'},
                                {'X', 'O', 'X', 'X','X'},
                                {'X', 'O', 'X','O', 'X'},
                                {'X', 'O', 'X','O', 'X'},
                                {'X','X','X','O','X'}};
    int n=board.size();
    int m=board[0].size();
    vector<vector<int>> visited(n,vector<int>(m,0));
    for(int i=0;i<m;i++)
    {
        if(board[0][i]=='O') senddfs(board, visited, 0,i);
        if(board[n-1][i]=='O') senddfs(board,visited,n-1,i);
    }
    for(int j=1;j<n-1;j++)
    {
        if(board[j][0]=='O') senddfs(board,visited,j,0);
        if(board[j][m-1]=='O') senddfs(board,visited,j,m-1);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(visited[i][j]!=1 && board[i][j]=='O')
            {
              board[i][j]='X';
            }
            cout<<board[i][j];
        }
        cout<<endl;
    }

    }
