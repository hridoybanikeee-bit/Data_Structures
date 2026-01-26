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
class queues
{
    public:
    node* head = NULL;
    node* tail = NULL;
    void push(int val)
    {
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
        node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail = head;
            return;
        }
        head->prev = NULL;
    }
    int front()
    {
        node* temp = head;
        return temp->val;
    }
    int back()
    {
        node* temp = tail;
        return temp->val;

    }
    bool empty()
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

class stacks
{
    public:
    node* head = NULL;
    node* tail = NULL;
    void push(int val)
    {
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
        node* deletenode = tail;
        tail = tail->prev;
        delete deletenode;
        if(tail == NULL)
        {
            head = tail;
            return;
        }
        tail->next = NULL;
    }
    int top()
    {
        node* temp = tail;
        return temp->val;
    }
    bool empty()
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
    
    stacks st,st1,st2;
    queues q;
    int n,m;
    cin>>n>>m;
    int flag = 0; //mil thakle
    for(int i=0; i<n; i++)
    {
        int val;
        cin>>val;
        st.push(val);
    }
    for(int i=0; i<m; i++)
    {
        int val;
        cin>>val;
        q.push(val);
    }
    while(!st.empty())
    {
        int val = st.top();
        st1.push(val);
        st.pop();
    }
     while(!q.empty())
    {
        int val = q.front();
        st2.push(val);
        q.pop();
    }
    if(n!=m)
    {
        cout<<"NO";
    }
    else
    {
        node* temp1 = st1.head;
        node* temp2 = st2.head;
        for(node* i = temp1, *j=temp2; i!=NULL; i=i->next,j=j->next)
        {
            if(i->val != j->val)
            {
                flag = 1; //mil na thakle
                break;
            }
        }
        if(flag == 0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
        
    }

    return 0;
}