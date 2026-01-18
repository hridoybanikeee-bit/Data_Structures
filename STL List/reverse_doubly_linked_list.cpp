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
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail->next->prev = tail;
    tail = newnode;
}
void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp=temp->next;
    }
}
void reverse_list(node* head, node* tail)
{
    for(node* i= head,*j= tail; (i != j) && (j != i->prev); i= i->next, j = j->prev)
    {
        swap(i->val,j->val);
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
        insert_at_tail(head,tail,val);
    }
    print(head);
    cout<<"forward_print done"<<endl;
    reverse_list(head,tail);
    print(head);
    return 0;
}