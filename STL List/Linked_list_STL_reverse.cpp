#include<bits/stdc++.h>
using namespace std;
void take_input(list<int> &l)
{
    int x;
    while(true)
    {
        cin>>x;
        if(x==-1)
        {
            break;
        }
        l.push_back(x);
    }
}
int main()
{
    list<int> list1;
    take_input(list1);
    list1.reverse();
    for(int x:list1)
    {
        cout<<x<<" ";
    }
    return 0;
}