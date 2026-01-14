#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        next = NULL;
        prev = NULL;
    }

};
void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node *tail = new Node(30);
    head->next = a;
    a->next = tail;
    a->prev = head;
    tail->prev = a;
    print_forward(head);
    print_reverse(tail);
    return 0;
}