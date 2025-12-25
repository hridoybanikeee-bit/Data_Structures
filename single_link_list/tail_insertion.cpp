#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        next = NULL;
    }

};
void to_last(Node* &head, int val)
{
    Node* temp;
    temp = head;
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        return;
    }
    
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void to_print(Node* head)
{
    Node *tmp;
    tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node * head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    head->next = a;
    a->next = b;
    to_last(head,45);
    to_print(head);
    return 0;
}