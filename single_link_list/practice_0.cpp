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
void size_count(node* head)
{
    node* tmp = head;
    int count = 0;
    while(tmp != NULL)
    {
        count+= 1;
        tmp = tmp->next;
    }
    cout<<"Element Number: "<<count<<endl;
}


int main()
{
    node* head = new node(123);
    node* a = new node(34);
    node* b = new node(234);
    head->next = a;
    a->next = b;
    size_count(head);
    return 0;
}