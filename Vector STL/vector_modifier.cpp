#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5,3,3,2,2,3,5};
    // replace(v.begin(),v.end(),3,100);
    // for(int x: v)
    // {
    //     cout<<x<<" ";
    // }
    auto it = find(v.begin(),v.end(),4);
    if(it == v.end())
    {
        cout<<"Not found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}