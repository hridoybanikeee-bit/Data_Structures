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
    }
    tail->next = newval;
    tail = newval;
}
void sort_check(node* &head)
{
    node* tmp = head;
    if(head == NULL)
    {
        cout<<"Null list";
        return;
    }
    int count = 0;
    node * adv = tmp->next;
    while(tmp != NULL && adv != NULL)
    {
            if(tmp->val > adv->val)
            {
                count = 1;
                break;
            }
            adv = adv->next;
            tmp = tmp->next;
    }
    if(count == 0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
int main()
{
    node* head = new node(2);
    node* tail = new node(4);
    head->next = tail;
    add_at_last(head,tail,6);
    add_at_last(head,tail,5);
    add_at_last(head,tail,8);
    add_at_last(head,tail,4);
    sort_check(head);
    return 0;
}