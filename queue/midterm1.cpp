#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st,st1,st2;
    queue<int>q;
    int n,m;
    cin>>n>>m;
    int flag = 0;
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    if(n!=m)
    {
        cout<<"No";
    }
    else
    {
        while(!st.empty())
        {
            int val = st.top();
            st1.push(val);
            st.pop();

        }
         while(!q.empty())
        {
            int val = q.front();
            st2.push(val);
            q.pop();

        }
        if(st1==st2)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }

    }
    
    return 0;
}