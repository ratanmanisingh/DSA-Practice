#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void insertAtEnd(node *&head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if (head == NULL)
    {
        newnode->prev = NULL;
        head = newnode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;        // last node dhundo
    }
    temp->next = newnode;         // last node -> naya node
    newnode->prev = temp;         // naya node -> purana last node

    node *i = head;
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    node *head = NULL;
    for (int i = 0; i < n; i++)
    {
        node *newnode = new node();
        cout << "Enter element: ";
        cin >> newnode->data;
        newnode->next = NULL;
        newnode->prev = NULL;

        // Attach the new node after the current last node.
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = newnode;
            newnode->prev = last;
        }
    }
    insertAtEnd(head, 6);
}