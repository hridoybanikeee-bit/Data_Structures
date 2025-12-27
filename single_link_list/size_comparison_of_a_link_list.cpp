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
int to_count(node* head)
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
        to_add(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val == -1)
        {
            break;
        }
        to_add(head2,tail2,val);
    }
    int x = to_count(head1);
    int y = to_count(head2);
    if(x==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}