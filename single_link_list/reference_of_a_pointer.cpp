#include<bits/stdc++.h>
using namespace std;
void fun(int* p)
{
    
    *p = 150;
    
    
}
int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout<<"From Main Function: "<<*p<<endl;
    return 0;
}