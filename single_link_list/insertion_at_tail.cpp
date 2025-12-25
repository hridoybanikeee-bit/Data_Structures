#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }
};
void add_to_tail(Node* &head, int val)
{
    Node* tmp;
    tmp = head;
    Node* newnode = new Node(val);
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
}
void to_print(Node* head)
{
    Node* tmp;
    tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;
    add_to_tail(head,40);
    to_print(head);
    return 0;
}