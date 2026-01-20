#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node* prev;
    node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }

};
class mystack
{
    public:
    node* head = NULL;
    node* tail = NULL; 
    int size = 0;
    void push(int val)
    {
        size++;
        node* newnode = new node(val);
        if(head == NULL)
        {
            head = newnode;
            tail = newnode;
            return;
        }
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
    }
    void pop()
    {
        size--;
        node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == NULL)
        {
            head = NULL;
            return;
        }       
        tail->next = NULL; 
    }
    int top()
    {
        return tail->val;
    }
    int sizee()
    {
        return size;
    }
    bool is_empty()
    {
        if(head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

};
int main()
{
    
    mystack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    while(!st.is_empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}
