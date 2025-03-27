// Example 1:
// Input: tokens = ["2","1","+","3","*"]
// Output: 9
// Explanation: ((2 + 1) * 3) = 9
// Example 2:
// Input: tokens = ["4","13","5","/","+"]
// Output: 6
// Explanation: (4 + (13 / 5)) = 6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack <int> st;
    vector<string> tokens={"4","13","5","/","+"};

    for(int i=0;i<tokens.size();i++)
    {
       if(tokens[i]=="/"|| tokens[i] == "*" ||  tokens[i] == "+" ||  tokens[i] == "-" )
       {
        int res;
        int val1=st.top();
        st.pop();
        int val2=st.top();
        st.pop();
        if(tokens[i] == "/") res=val2/val1;
        else if(tokens[i] == "*") res=val2*val1;
        else if(tokens[i] == "+") res=val2+val1;
        else if(tokens[i] == "-") res=val2-val1;
        st.push(res);
       }
       else{
         st.push(stoi(tokens[i]));
       }
        
    }
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

    
}