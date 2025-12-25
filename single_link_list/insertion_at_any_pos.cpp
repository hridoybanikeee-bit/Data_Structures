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
void at_any_pos(Node* &head, int idx, int val)
{
    Node* newnode = new Node(val);
    Node* temp = head;
    for(int i=0; i<idx-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void printing(Node* head)
{
    Node* tmp =head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    at_any_pos(head, 2, 252);
    printing(head);
    return 0;
}