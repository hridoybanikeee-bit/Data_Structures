#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    node* next;
    int val;
    node(int val)
    {
        this->val = val;
        next = NULL;
    }

};
class myqueue
{
    public:
    node* head = NULL;
    node* tail = NULL;
    int size =0;
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
        tail = newnode;
    }
    void pop()
    {
        size--;
        node* deletenode = head;
        head = head->next;
        delete deletenode;
        if(head == NULL)
        {
            tail = NULL;
        }
    }
    int front()
    {
        node* temp = head;
        return temp->val;
    }
    int back()
    {
        node* temp = tail; // could be directly done, 
        return temp->val;
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
    myqueue q;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    // cout<<q.sizee()<<endl;
    while(q.is_empty() == false)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}