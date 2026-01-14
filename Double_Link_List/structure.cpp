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
void insert_at_tail(node* &head, node* &tail, int val)
{
    node* newnode = new node(val);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void input(node* &head, node* &tail)
{
    int val;
    
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_tail(head,tail,val);
    }
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    input(head,tail);
    return 0;
}