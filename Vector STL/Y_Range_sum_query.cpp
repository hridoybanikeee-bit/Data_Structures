#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int a[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<y; i++)
    {
        int m,n;
        cin>>m>>n;
        int sum = 0;
        for(int i=m-1; i<n; i++)
        {
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}