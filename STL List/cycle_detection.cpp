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
int main()
{
    node* head = new node(10);
    node* a = new node(20);
    node* b = new node(30);
    node* c = new node(40);
    node* d = new node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    //d->next = a;
    int flag = 0;
    node* slow = head;
    node* fast = head;
    while(fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"No cycle detected"<<endl;
    }
    else
    {
        cout<<"Cycle detected"<<endl;
    }
    return 0;
}