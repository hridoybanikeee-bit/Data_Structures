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
void optimized(node* &head, node* &tail, int val)
{
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
    node* head = new node(45);
    node* a = new node(85);
    node* tail = new node(57);
    head->next = a;
    a->next = tail;
    optimized(head,tail,96);
    optimized(head,tail,969);
    print(head);
    return 0;
}