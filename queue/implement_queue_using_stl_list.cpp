#include<bits/stdc++.h>
using namespace std;
class myqueue
{
    public:
    list<int> l;
    void push(int val)
    {
       l.push_back(val);
        
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int sizee()
    {
        return l.size();
    }
    bool is_empty()
    {
       l.empty();
    }

};

int main()
{
    myqueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.sizee()<<endl;
    while(q.is_empty() == false)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}