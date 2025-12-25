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
void insert_at_head(Node* &head, int val)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
void to_print(Node* head)
{
    Node * tmp = head;
    while(tmp != NULL)
    {
        cout<<tmp->val<<endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = b;
    b->next = c;
    insert_at_head(head,100);
    insert_at_head(head,1000);
    to_print(head);
    return 0;
}