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
int sum = 0;
int left_sum(node* root)
{
    
    if(root == NULL) return 0;
    if(root->left) 
    {
        if(root->left->left == NULL && root->left->right == NULL)
        sum+= root->left->val;

    }
    left_sum(root->left);
    left_sum(root->right);
    return sum;
}
int main()
{
    node* root = input();
    int x = left_sum(root);
    cout<<x;
    return 0;
}