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
int count_node(node* root)
{
    if(root==NULL) return 0;
    int l = count_node(root->left);
    int r = count_node(root->right);
    return l+r+1;
}
int height_count(node* root)
{
    if(root == NULL) return 0;
    int l = height_count(root->left);
    int r = height_count(root->right);
    return max(l,r) + 1;

}
int main()
{
    node* root = input();
    int node_count = count_node(root);
    int level_count = height_count(root);
    int perfect = pow(2,level_count) -1 ;
    if(node_count == perfect) cout<<"Perfect";
    else cout<<"Not Perfect";
    return 0;
}