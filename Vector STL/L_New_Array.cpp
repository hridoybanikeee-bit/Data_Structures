#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    vector <int> b(n);
    vector <int> c(n+n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
    }
    c = b;
    for(int i=0; i<n; i++)
    {
        int x = a[i];
        c.push_back(x);
    }
    for(int i=0; i<c.size(); i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}