#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* next;
    node(int val)
    {
        this->val = val;
        next = NULL;
    }

};
void add_at_last(node* &head, node* &tail, int val)
{
    node* newval = new node(val);
    if(head == NULL)
    {
        head = newval;
        tail = newval;
        return;
    }
    tail->next = newval;
    tail = newval;
}
void output(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
    
}
void delete_at(node* &head, int idx)
{
    if(head == NULL)
    {
        return;
    }
    node* deletenode;
    node* temp = head;
    for(int i=0; i<idx-1; i++)
    {
        temp = temp->next;
    }
    deletenode = temp->next;
    temp->next = temp->next->next;
    delete deletenode;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        add_at_last(head, tail, val);
    }
    delete_at(head, 2);
    output(head);
    return 0;
}