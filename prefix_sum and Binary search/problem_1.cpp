#include<bits/stdc++.h>
using namespace std;
int run_sum(int arr[],int n)
{
    int prefix[n];
    prefix[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    for(int i=0; i<n; i++)
    {
        cout<<prefix[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    run_sum(arr,n);

    return 0;
}