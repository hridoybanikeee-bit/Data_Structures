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
void to_add(node* &head, node* &tail, int val)
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
void print(node* head)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
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
        to_add(head, tail, val);
    }
    print(head);
    return 0;
}