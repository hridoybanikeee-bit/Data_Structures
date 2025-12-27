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

int find_max(node* &head)
{
    if(head == NULL)
    {
        return -1;
    }
    node* tmp = head;
    int max = tmp->val;
    for(node* i = tmp; i != NULL; i=i->next)
    {
        if(max < i->val)
        {
            max = i->val;
        }
    }
    return max;

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
    int y = find_max(head);
    cout<<y;
    return 0;
}