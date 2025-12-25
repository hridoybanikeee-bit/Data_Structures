#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v,v2;
    v = {1,2,3,4,5};
    v2 = {10,20,30,40};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+2);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}