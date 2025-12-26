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
void add_to_last(node* &head, node* &tail, int val)
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
void to_print(node *head)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}
void delete_val(node* &head)
{
    if(head == NULL)
    {
        return;
    }
    node* deletenode = head;
    head = head->next;
    delete deletenode;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        add_to_last(head, tail, val);
    }
    delete_val(head);
    delete_val(head);
    delete_val(head);
    to_print(head);
    return 0;
}