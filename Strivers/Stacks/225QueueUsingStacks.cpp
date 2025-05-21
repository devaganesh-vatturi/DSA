#include<bits/stdc++.h>
using namespace std;
class newclass{
    public:
    stack <int> st;
    vector <int> vec;
    newclass() {
       
    }
    
    void push(int x) {
        st.push(x);
    }
    
    void printStack(stack<int> s) {
        while (!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;
    }

    int pop() {
       stack <int> nst;
       int ele;
       while(!st.empty())
       {
         nst.push(st.top());
         st.pop();

       }
       ele=nst.top();
       cout<<"element poped is "<<ele;
       cout<<endl;
       printStack(nst);
       nst.pop();
       while(!nst.empty())
       {
        st.push(nst.top());
        nst.pop();
       
    }
    
    }
    
    int top() {
       int ele=st.top();
       cout<<ele;
    }
    
    bool empty() {
        return st.empty();
    }

};
int main()
{
    newclass C;
    C.push(1);
    C.push(2);
    cout<<"top is"<<endl;
    C.top();
    C.pop();
    C.top();
    return 0;
}