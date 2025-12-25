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
void checker(node* head)
{
    int count = 0;
    node* temp = head;
    while(temp != NULL)
    {
        node* newval = temp->next;
        while(newval != NULL)
        {
            if(newval->val == temp->val )
            {
                count++;
                break;
            }
            newval = newval->next;
        }
        temp = temp->next;
    }
    if(count == 0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }

}
int main()
{
    node* head = new node(1);
    node* a = new node(2);
    node* b = new node(3);
    node* c = new node(4);
    node* d = new node(3);
    node* e = new node(6);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    checker(head);
    return 0;
}