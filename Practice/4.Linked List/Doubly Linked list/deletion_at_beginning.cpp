#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void deleteAtBeginning(node *&head)
{
    if (head == NULL)
        return;

    node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL; // naye head ka prev fix karo
    }

    delete temp;

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
    deleteAtBeginning(head);
}
