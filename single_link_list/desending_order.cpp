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
void input(node* &head, node* &tail, int val)
{
    node *newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode; 
}

void print(node* head)
{
    node* tmp = head;
    if(head == NULL)
    {
        return;
    }
    while( tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

void descending(node* head)
{
    node* temp = head;
    for(node* i= temp; i!= NULL; i=i->next)
    {
        for(node* j= i->next; j!= NULL; j=j->next)
        {
            if(i->val < j->val)
            {
                swap(i->val, j->val);
            }
        }
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
        input(head, tail, val);

    }
    descending(head);
    print(head);
    return 0;
}