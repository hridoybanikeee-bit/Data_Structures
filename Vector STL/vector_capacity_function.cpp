#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(10,1);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.resize(15,4);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}