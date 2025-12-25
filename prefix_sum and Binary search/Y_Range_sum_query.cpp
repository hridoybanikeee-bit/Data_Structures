#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector <long long int> v(n+1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    vector <long long int> prefix(n+1);
    prefix[1] = v[1];
    for(int i=2; i<=n; i++)
    {
        prefix[i] = prefix[i-1] + v[i];
    }
    
    for(int i=1; i<=q; i++)
    {
        int l,r;
        cin>>l>>r;
        long long int sum;
        if(l==1)
        {
            sum = prefix[r];
        }
        else
        {
           sum = prefix[r] - prefix[l-1]; 
        }
        cout<<sum<<endl;
    }
    return 0;
}