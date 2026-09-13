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

int main()
{
    node *head = NULL;
    insertPos(head, 100, 1);
    
}