#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,3,4,5};
    vector <int> v1;
    v1 = v;
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v1.push_back(45);
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v1.pop_back();
    v1.pop_back();
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}