#include<bits/stdc++.h>
using namespace std;
void take_input(list<int> &l)
{
    int x;
    while(true)
    {
        cin>>x;
        if(x==-1)
        {
            break;
        }
        l.push_back(x);
    }
}
int main()
{
    list<int> list1;
    take_input(list1);
    list<int>list3(list1);
    list1.reverse();
    if(list1 == list3)
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not Palindrome"<<endl;
    }
    return 0;
}