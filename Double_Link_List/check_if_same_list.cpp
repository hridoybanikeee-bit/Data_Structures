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
void insert_at_last(node* &head,node* &tail, int val)
{
    node* newnode = new node(val);
    if(tail == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
int check_size(node* head)
{
    int count = 0;
    node* tmp = head;
    while(tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void check(node* head1, node* head2)
{
    int size1 = check_size(head1);
    int size2 = check_size(head2);
    if(size1 != size2)
    {
        cout<<"No";
    }
    else
    {
        int verdict = 0;
        node* one = head1;
        node* two = head2;
        while(one != NULL)
        {
            if(one->val != two->val)
            {
                verdict = 1;
                break;
            }
            one = one->next;
            two = two->next;
        }
        if(verdict == 0)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
    }
    
}

int main()
{
    node* head1 = NULL;
    node* tail1 = NULL;
    node* head2 = NULL;
    node* tail2 = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_last(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        insert_at_last(head2,tail2,val);
    }
    check(head1,head2);
    return 0;
}