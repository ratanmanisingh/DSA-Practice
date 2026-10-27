#include<iostream>
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

void postOrder(node* root){
    if(root==NULL){
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);

    cout << "Post-Order Traversal: ";
    postOrder(root);
    cout << endl;

    return 0;
}