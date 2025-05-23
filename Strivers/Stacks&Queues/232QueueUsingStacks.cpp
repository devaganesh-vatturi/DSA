#include<bits/stdc++.h>
using namespace std;

class MyStack {
    public:
        queue <int> q;
        MyStack() {
            
        }
        void push(int x) {
         q.push(x);
        }
        
        int pop() {
           queue <int> nq;
           while(!q.empty())
           {
            nq.push(q.front());
            q.pop();
           }
           for(int i=0;i<nq.size()-1;i++)
           {
            q.push(nq.front());
            nq.pop();

           }
           int ele=nq.front();
           nq.pop();
           cout<<"poped element is"<<ele<<endl;

        }
        
        int top() {
            queue <int> nq;
            int ele;
            while(!q.empty())
            {
             nq.push(q.front());
             ele=q.front();
             q.pop();
            }
            while(!nq.empty())
            {
             q.push(nq.front());
             nq.pop();
 
            }
            cout<<"top element is"<<ele<<endl;
        }
        
        bool empty() {
            return q.empty();
        }
    };
int  main()
{
    MyStack S;
    S.push(1);
    S.push(2);
    S.top();
    S.pop();
    S.empty();
    return 0;
}