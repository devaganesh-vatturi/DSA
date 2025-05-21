// Example 1:
// Input: asteroids = [5,10,-5]
// Output: [5,10]
// Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.
// Example 2:
// Input: asteroids = [8,-8]
// Output: []
// Explanation: The 8 and -8 collide exploding each other.
// Example 3:
// Input: asteroids = [10,2,-5]
// Output: [10]
// Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.
#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector <int> astreoids={10,2,-5};
    stack <int> st;
    for(int i:astreoids)
    {
        if(i>0)
        {
            st.push(i);
        }
        else{
            while(!st.empty() && st.top()>0 && st.top()<abs(i))
            {
                st.pop();
            }
            if(!st.empty() && st.top()==abs(i))
            {
                st.pop();
            }
            else if(st.empty() || st.top()<0)
            {
                st.push(i);
            }
        }
    }
    while(!st.empty())
    {
        int ele=st.top();
        cout<<ele<<" ";
        st.pop();
    }
}
