#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *header = new node();
    header->next = NULL;

    node *a = new node();
    node *b = new node();
    node *c = new node();

    a->data = 10;
    b->data = 20;
    c->data = 30;

    a->next = b;
    b->next = c;
    c->next = NULL;

    header->next = a;

    node *temp = header->next;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}

/*
int main()
{
    int n;
    cin >> n;

    node *header = new node();
    header->next = NULL;

    node *tail = header;

    for (int i = 0; i < n; i++)
    {
        node *newnode = new node();
        cin >> newnode->data;
        newnode->next = NULL;

        if (header->next == NULL)
        {
            header->next = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
    }

    node *temp = header->next;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
    return 0;
}
*/
