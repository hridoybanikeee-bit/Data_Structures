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
void to_reverse(node* head)
{
    node* temp = head;
    if(temp == NULL)
    {
        return;
    }
    to_reverse(temp->next);
    cout<<temp->val<<" ";
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
        to_add(head,tail,val);
    }
    to_reverse(head);
 
    return 0;
}