#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void insertBeginning(node* &head, node* &tail, int value)
{
    node *newnode = new node();
    newnode->data = value;

    if (head == NULL)
    {
        head = tail = newnode;
        newnode->next = head;
        return;
    }
    newnode->next = head;
    tail->next = newnode;
    head = newnode;
}

int main()
{
    int n;
    cin >> n;
    node* head = NULL;
    node* tail = NULL;

    for (int i = 0; i < n; i++)
    {
        node* newnode = new node();
        cin >> newnode->data;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }
    if (tail != NULL)
    {
        tail->next = head;
    }

    insertBeginning(head, tail, 4);

    node* current = head;

    do
    {
        cout << current->data << " ";
        current = current->next;
    } while (current != head);
    return 0;
}