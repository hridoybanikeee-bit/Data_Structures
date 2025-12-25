#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector <char> s;
    int fre[27] = {0};
    char ch;
    while(cin>>ch)
    {
        s.push_back(ch);
    }
    for(int i=0; i<s.size(); i++)
    {
        int x = s[i] - 'a';
        // int x = y - 96;
        fre[x+1]++;
    }
    for(int i=0; i<27; i++)
    {
        if(fre[i] != 0)
        {
            cout<<(char)(i + 96)<<" : " << fre[i] <<endl;
        }
    }
    
    return 0;
}