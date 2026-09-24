#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void insertbegCHL(node *&header, node *&tail, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = header->next;
    header->next = newnode;

    if (tail == header)
    {
        tail = newnode;
    }
}

int main()
{
    int n;
    cin >> n;
    node *header = new node();
    header->data = 0;
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
    insertbegCHL(header, tail, 6);

    node *i = header->next;
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
    cout << endl;
    return 0;
}