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
    newnode->next = tail->next;
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
        cout<<tmp->val<<" "<<endl;
        tmp = tmp->next;
    }
}
void to_add_any_pos(node* &head, int pos, int val)
{
    int count = 0;
    node* temp = head;
    for(node* i= temp; i!=NULL; i=i->next)
    {
        count++;
    }
    if(count>=pos)
    {
    node* newnode = new node(val);
    if(pos == 0)
    {
        newnode->next = temp;
        head = newnode;
    }
    else if(pos != 0)
    {
    for(int i=0; i<(pos-1); i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    }
    
    else
    {
        cout<<"INVALID"<<endl;;
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
        to_add(head,tail,val);
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int idx;
        int val;
        cin>>idx>>val;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int pos,val;
        cin>>pos>>val;
        to_add_any_pos(head,pos,val);
        to_print(head);

    }
    return 0;
}