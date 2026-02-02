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
int height_count(node* root)
{
    if(root == NULL) return -1;
    if(root->left == NULL && root->right == NULL) return 0;
    int l = height_count(root->left);
    int r = height_count(root->right);
    return max(l,r) + 1;

}
void print(node* root,int level)
{
    queue<pair<node*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        node* current = q.front().first;
        int x = q.front().second;
        q.pop();
        if(level == x) cout<<current->val<<" ";
        if(current->left) q.push({current->left,x+1});
        if(current->right) q.push({current->right,x+1});
    }
    
}
int main()
{
    node* root = input();
    int level;
    cin>>level;
    int height = height_count(root);
    if(level>height)
    {
        cout<<"Invalid";
    }
    else
    {
        print(root,level);
    }
    return 0;
}