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
void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<endl;
        temp = temp->next;
    }
}
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
    tail = newnode;
}
void make_it_reverse(node* &head, node* &tail, node* temp)
{
    if(temp->next == NULL)
    {
        head = temp;
        return;
    }
    make_it_reverse(head,tail,temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;

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
    make_it_reverse(head,tail,head);
    print(head);
    cout<<head->val<<endl;
    return 0;
}