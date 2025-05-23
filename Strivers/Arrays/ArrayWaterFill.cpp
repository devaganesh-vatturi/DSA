// Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
// Output: 6
// Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
// Example 2:
// Input: height = [4,2,0,3,2,5]
// Output: 9

#include<bits/stdc++.h>
using namespace std;
int getright(vector<int>& arr, int start, int end)
{
       int max=0;
       for(int i=start;i<end;i++)
       {
           if(arr[i]>max) max=arr[i];
       } 
       return max;
}
int main()
{
    vector <int> height={4,2,3};
    int left=height[0];
    int n=height.size(),sum=0;
    int right=getright(height,1,n);
    for(int i=1;i<n;i++)
    {
        if(height[i]>=left){
            left=height[i]; right=getright(height,i+1,n);
            cout<<"left"<<left<<"right"<<right<<" ";
            continue;
        }
        if(height[i]<left && (right<=height[i]))
        {
            left=height[i]; right=getright(height,i+1,n);
            cout<<"left"<<left<<"right"<<right<<" ";
            continue;
        }
        if(left<=right)
        {
            sum+= (left-height[i]);
        }
        else if(left>right)
        {
            sum+= (right-height[i]);
        }
       
    }
   cout<<sum;
    
    return 0;
}