#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if(q.empty() == false)
    {
        q.pop();
    }
    if(q.empty() == false)
    {
        cout<<q.front()<<endl;
    }
    return 0;
}