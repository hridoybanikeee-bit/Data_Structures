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
void insertion_head(node* &head,node* &tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->prev =newnode;
    head = newnode;

}
void insertion_tail(node* &head, node* &tail, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;

}
void insert_any(node* &head, node* &tail, int idx, int val)
{
    node* newnode = new node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    node* temp = head;
    for(int i=0; i<(idx-1); i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;

}
void print_reverse(node* head, node* tail)
{
    node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<"R ->"<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
void print_forward(node* head, node* tail)
{
    node* tmp = head;
    while(tmp != NULL)
    {
        cout<<"L ->"<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
int size(node* head)
{
    int count = 0;
    node* tmp = head;
    while(tmp != NULL)
    {
        count++;;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    node* head = NULL;
    node* tail = NULL;
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int x,v;
        cin>>x>>v;
        int y = size(head);
        if(x>y)
        {
            cout<<"INVALID"<<endl;
        }
        else
        {
             if(x==0)
                {
                    insertion_head(head,tail,v);
                    print_forward(head,tail);
                    print_reverse(head,tail);
                }
            else if(x==y)
            {
                insert_tail(head,tail,v);
                print_forward(head,tail);
                print_reverse(head,tail);
            }
            else
            {
                insert_any(head,tail,x,v);
                print_forward(head,tail);
                print_reverse(head,tail);

            }

        }
       
        


    }
    return 0;
}