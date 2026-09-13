#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insertPos(node *&head, int value, int pos)
{
    node *newnode = new node();
    newnode->data = value;
    node *current = head;

    for (int i = 0; i < pos - 1; i++)
    {
        current = current->next;
    }
    newnode->next = current->next;
    current->next = newnode;
}

// second method

// Node *insertAtPosition(Node *head, int value, int pos)
// {
//     Node *newNode = new Node();
//     newNode->data = value;

//     if (pos == 1)
//     {
//         newNode->next = head;
//         return newNode;
//     }

//     Node *temp = head;
//     for (int i = 1; i < pos - 1 && temp != NULL; i++)
//     {
//         temp = temp->next; // reach node before target position
//     }

//     newNode->next = temp->next;
//     temp->next = newNode;

//     return head;
// }

int main()
{
    node *a = new node();
    node *b = new node();
    node *c = new node();

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;

    insertPos(head, 15, 1);

    node *i = head;

    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
    return 0;
}