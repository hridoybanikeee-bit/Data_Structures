#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,50,60,70,70,50,30};
    //l.remove(40); //remove any value from the list
    //l.sort(); // sort value in ascending order
    //l.sort(greater<int>()); // sorting value in decending value
    //l.unique(); //pashapashi kono same value thakle bad diye dey
    l.reverse(); //reverse the list
    for(int x:l)
    {
        cout<<x<<endl;
    }
    return 0;
}