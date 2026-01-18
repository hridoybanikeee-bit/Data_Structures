#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l;
    list<int> l2 = {10,20,30,50};
    l = l2;
    l.push_back(58);
    l.push_front(74);
    for(int v: l)
    {
        cout<<v<<endl;
    }
    cout<<"New list";
    l.pop_back();
    l.pop_back();
    l.pop_front();
    for(int x: l)
    {
        cout<<x<<endl;
    }
    return 0;
}