#include<bits/stdc++.h>
using namespace std;
class mystack
{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int sizee()
    {
        return v.size();
    }
    bool is_empty()
    {
        return v.empty();
    }

};
int main()
{
    mystack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout<<st.top()<<endl;
    st.pop();
    if(st.is_empty() == false)
    {
        cout<<st.top()<<endl;
    }
    if(st.is_empty() == false)
    {
        st.pop();
    }
    if(st.is_empty() == false)
    {
        cout<<st.top()<<endl;
    }
   
    return 0;
}
