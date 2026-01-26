#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string>s;
    while(true)
    {
        string s1;
        cin>>s1;
        if(s1 == "end")
        {
            break;
        }
        else
        {
            s.push_back(s1);
        }
    }
    int n;
    cin>>n;
    auto pos = s.begin();
    for(int i=0; i<n; i++)
    {
        string cmd;
        cin>>cmd;
        if(cmd == "visit")
        {
            string web;
            cin>>web;
            int tmp = 0;
            for(auto it =s.begin(); it != s.end(); it++)
            {
                if(*it == web)
                {
                    cout<<web<<endl;
                    pos = it;
                    tmp = 1;
                    break;
                }
            }
            if(tmp == 0)
            {
                cout<<"Not Available";
            }
        }
        else if(cmd == "next")
        {
            if(next(pos)==s.end())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                pos++;
                cout<<*pos<<endl;
            }
        }
        else if(cmd == "prev")
        {
            if(pos==s.begin())
            {
                cout<<"Not Available"<<endl;
            }
            else
            {
                pos--;
                cout<<*pos<<endl;
            }
        }
    }
    return 0;
}