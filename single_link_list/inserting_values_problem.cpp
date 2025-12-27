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
void to_print(node* head)
{
    if(head == NULL)
    {
        return;
    }
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void add_any_pos(node* &head, int idx, int val)
{
    node* temp = head;
    node* newnode = new node(val);
    int count = 0;
    for(node* i= temp; i!= NULL; i=i->next)
    {
        count++;
    }
    if(count>=idx)
    {
        if(idx==0)
        {
            newnode->next = temp;
            head = newnode;
        }
        else
        {
            for(int i=0; i<(idx-1); i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
        }
        to_print(head);
    }
    else
    {
        cout<<"Invalid"<<endl;
        return;
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
        input(head,tail,val);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int idx;
        int val;
        cin>>idx>>val;
        add_any_pos(head,idx,val);    
    }
    return 0;
}