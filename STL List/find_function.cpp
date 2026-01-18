#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60,70};
    auto it = find(l.begin(),l.end(),80);
    if(it == l.end())
    {
        cout<<"Did not found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}