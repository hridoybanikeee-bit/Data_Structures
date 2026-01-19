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
    list<int> list1;
    list<int> list2;
    take_input(list1);
    take_input(list2);
    if(list1 == list2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}