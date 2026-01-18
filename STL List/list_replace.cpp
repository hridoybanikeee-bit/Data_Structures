#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,20,50,20};
    replace(l.begin(),l.end(),20,100);
    for(int x: l)
    {
        cout<<x<<endl;
    }
    return 0;
}