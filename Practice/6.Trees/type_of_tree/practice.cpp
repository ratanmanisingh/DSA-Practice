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
        root = createnode(value);
    }
    else if (value < root->data)
    {
        insert(root->left, value);
    }
    else
    {
        insert(root->right, value);
    }
}

void preOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int main(){
    node* root = createnode(40);
    root->left = createnode(20);
    root->right = createnode(60);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);

    preOrder(root);
}