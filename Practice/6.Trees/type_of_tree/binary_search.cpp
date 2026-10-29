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

bool binarysearch(node* root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == key)
    {
        return true;
    }
    else if (key < root->data)
    {
        return binarysearch(root->left, key);
    }
    else
    {
        return binarysearch(root->right, key);
    }
}

void preOrder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(node* root){
    if(root==NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
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
    node *root = NULL;
    int n, value;
    cout << "Enter the number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        root = insert(root, value);
    }

    cout << "Pre-Order Traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-Order Traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-Order Traversal: ";
    postOrder(root);
    cout << endl;

    int key;
    cout << "Enter a value to search: ";
    cin >> key;
    if (binarysearch(root, key))
    {
        cout << "Value " << key << " found in the tree." << endl;
    }
    else
    {
        cout << "Value " << key << " not found in the tree." << endl;
    }

    return 0;
}