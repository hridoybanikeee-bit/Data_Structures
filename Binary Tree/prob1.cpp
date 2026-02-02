#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node* left;
    node* right;
    node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
node* input()
{
    int val;
    cin>>val;
    queue<node*>q;
    node* root;
    if(val==-1) root = NULL;
    else root = new node(val);
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        node* p = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        node* myleft, *myright;
        if(l==-1) myleft = NULL;
        else myleft = new node(l);
        if(r==-1) myright = NULL;
        else myright = new node(r);
        p->left = myleft;
        p->right = myright;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root;
}
int without_leaf(node* root)
{
    int sum = 0;
    queue<node*>q;
    q.push(root);
    node* f = q.front();
    q.pop();
    while(!q.empty())
    {
        if(f->left->val || f->right->val) sum += f->val;
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    return sum;
}
int main()
{
    node* root = input();
    int x= without_leaf(root);
    cout<<x;
    return 0;
}