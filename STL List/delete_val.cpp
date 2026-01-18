#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60,70};
    //delete single contain from the list
    //l.erase(next(l.begin(),2));
    //delete multiple contain from the list
    l.erase(next(l.begin(),2),next(l.begin(),5));
    for(int v: l)
    {
        cout<<v<<endl;
    }
    return 0;
}