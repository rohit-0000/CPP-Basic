#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* right;
    struct node* left;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

int main()
{
    node *root=new node(2);
    root->left=new node(21);
    root->right=new node(22);
    root->left->right=new node(212);
    return 0;
}