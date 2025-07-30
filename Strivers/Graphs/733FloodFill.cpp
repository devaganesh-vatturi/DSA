// You are given an image represented by an m x n grid of integers image, where image[i][j]
//  represents the pixel value of the image. You are also given three integers sr, sc, and color.
//  Your task is to perform a flood fill on the image starting from the pixel image[sr][sc].
// To perform a flood fill:
// Begin with the starting pixel and change its color to color.
// Perform the same process for each pixel that is directly adjacent (pixels that share a side with the original pixel, either horizontally or vertically) and shares the same color as the starting pixel.
// Keep repeating this process by checking neighboring pixels of the updated pixels and modifying their color if it matches the original color of the starting pixel.
// The process stops when there are no more adjacent pixels of the original color to update.
// Return the modified image after performing the flood fill.
// Example 1:
// Input: image = [[1,1,1],[1,1,0],[1,0,1]], sr = 1, sc = 1, color = 2
// Output: [[2,2,2],[2,2,0],[2,0,1]]
// Explanation:
// From the center of the image with position (sr, sc) = (1, 1) (i.e., the red pixel), all pixels connected by a path of the same color as the starting pixel (i.e., the blue pixels) are colored with the new color.
// Note the bottom corner is not colored 2, because it is not horizontally or vertically connected to the starting pixel.

// Example 2:
// Input: imge = [[0,0,0],[0,0,0]], sr = 0, sc = 0, color = 0
// Output: [[0,0,0],[0,0,0]]
// Explanation:
// The starting pixel is already colored with 0, which is the same as the target color. Therefore, no changes are made to the image.

#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<vector<int>> image={{0,0,0},{1,0,0}};
   int n=image.size();
   int m=image[0].size();
   vector<vector<int>> visited(n,vector<int> (m,0));
   int sc=1,sr=0,color=2;
   queue <pair<int,int>> qu;
   qu.push({sr,sc});
   int checkcolor=image[sc][sr];
   visited[sc][sr]=1;
   image[sc][sr]=color;
   while(!qu.empty())
   {
      int r=qu.front().first;
      int c=qu.front().second;
      qu.pop();
      int nrow[]={-1,1,0,0};
      int ncol[]={0,0,1,-1};
      for(int i=0;i<4;i++)
      {
        int newrow=r+nrow[i];
        int newcol=c+ncol[i];
        if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && visited[newrow][newcol]==0 && image[newrow][newcol] == checkcolor)
        {
            qu.push({newrow,newcol});
            visited[newrow][newcol]=1;
            image[newrow][newcol]=color;
        }
      }
   }

   for(auto subarr:image)
   {
    for(auto data:subarr)
    {
        cout<<data<<" ";
    }
    cout<<endl;
   }

}