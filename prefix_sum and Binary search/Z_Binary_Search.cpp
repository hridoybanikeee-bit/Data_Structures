#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    int arr[n];
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0; i<c; i++)
    {
        int flag = 0;
        int x = 0;
        int y = n-1;
        int val;
        cin>>val;
        while(x<=y)
        {
            
            int mid = (x+y)/2;
            if(arr[mid] == val)
            {
                flag = 1;
                break;
            }
            else if(arr[mid] < val)
            {
                x = mid + 1;
            }
            else
            {
                y = mid - 1;
            }
        }
        if(flag == 0)
        {
            cout<<"not found"<<endl;
        }
        else
        {
            cout<<"found"<<endl;
        }
    }
    return 0;
}