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
void print(node* head)
{
    node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
void delete_at_head(node* &head, node* &tail)
{
    node* deletenode = head;
    head = head->next;
    delete deletenode;
    if(head == NULL)
    {
        tail = NULL;
    }
    head->prev = NULL;
}
int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* tail = new node(30);
    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;
    delete_at_head(head,tail);
    delete_at_head(head,tail);
    print(head);
    return 0;
}