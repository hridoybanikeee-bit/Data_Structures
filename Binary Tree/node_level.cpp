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
int node_check(node* root, int digit)
{
    queue<pair<node*,int>>q;
    if(root) q.push({root,1});
    while(!q.empty())
    {
        pair<node*,int> parent = q.front();
        node* current_node = parent.first;
        int level = parent.second;
        if(current_node->val == digit) return level;
        if(current_node->left) q.push({current_node->left,level+1});
        if(current_node->right) q.push({current_node->right,level+1});
    }
    return -1;
}
int main()
{
    node* root = input();
    int x = node_check(root,2);
    cout<<x;
    return 0;
}