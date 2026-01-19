#include<bits/stdc++.h>
using namespace std;
void print_front(list<int> l)
{
    for(int x: l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
void print_back(list<int> l)
{
    l.reverse();
    for(int x: l)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int s = l.size();
        int x,v;
        cin>>x>>v;
        if(x == 0)
        {
            l.push_front(v);
            print_front(l);
            print_back(l);
        }
        else if(x==s)
        {
            l.push_back(v);
            print_front(l);
            print_back(l);
        }
        else if(x>s)
        {
            cout<<"Invalid"<<endl;
        }
        else 
        {
            auto it = next(l.begin(),x);
            l.insert(it,v);
            print_front(l);
            print_back(l);
        }

    }
    return 0;
}