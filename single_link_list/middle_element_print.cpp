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
void find_middle(node* &head)
{
    node* temp = head;
    int count = 0;
    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    //cout<<count;
    if(count == 0)
    {
        cout<<"Empty linked list";
    }
    else if(count % 2 != 0)
    {
        node* trav = head;
        int dig = count / 2;
        for(int i=1; i<= dig; i++)
        {
            trav = trav->next;
        }
        cout<<trav->val;
    }
    else
    {
        node* trav = head;
        int dig = count / 2;
        for(int i=1; i<= dig-1; i++)
        {
            trav = trav->next;
        }
        cout<<trav->val<<" "<<trav->next->val;
        
    }
}
int main()
{
    node* head = new node(2);
    node* a = new node(4);
    node* b = new node(6);
    node* c = new node(8);
    node* d = new node(10);
    node* e = new node(12);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    find_middle(head);
    return 0;
}