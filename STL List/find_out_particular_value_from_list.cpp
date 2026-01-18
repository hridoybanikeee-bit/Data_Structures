#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,50};
    list<int> m = {34,43,54,65};
    // cout<<*next(l.begin(),2)<<endl;
    l.insert(next(l.begin(),2),m.begin(),m.end());
    for(int v: l)
    {
        cout<<v<<endl;
    }
    return 0;
}