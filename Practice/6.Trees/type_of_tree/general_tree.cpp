#include <iostream>
using namespace std;

struct node
{
    node *left;
    int data;
    node *right;
};

node *createnode(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;

    return newnode;
}

node* insert(node* root, int value)
{
    if (root == NULL)
    {
        return createnode(value);
    }
    else if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }
    return root;
}