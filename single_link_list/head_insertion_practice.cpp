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
void insert_head(Node * &head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void to_print(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}
int main()
{
    Node *head = new Node(100);
    Node *a = new Node(200);
    Node *b = new Node(300);
    head->next = a;
    a->next = b;
    insert_head(head,5);
    to_print(head);
    return 0;
}