#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int val = 100;
    int flag = 0;
    int arr[n];
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    int j= n-1; 
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(arr[mid] == val)
        {
            flag = 1;
            break;
        }
        else if(arr[mid] < val)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    if(flag == 0)
    {
        cout<<"Not Found";
    }
    else
    {
        cout<<"Found";
    }
    return 0;
}