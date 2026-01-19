#include<bits/stdc++.h>
using namespace std;
void take_input(list<int> &l)
{
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        l.push_back(val);
    }
}
int main()
{
    list<int> l;
    take_input(l);
    l.sort();
    for(int x: l)
    {
        cout<<x<<" ";
    }
    return 0;
}