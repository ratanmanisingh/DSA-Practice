#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void deleteAtPosition(node* &head, int pos)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    if (pos == 1)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *prev = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prev = prev->next;           // "pehle wale" node tak pahuncho
    }

    node *target = prev->next;      // ye node delete karna hai
    prev->next = target->next;      // prev ko seedha target ke aage wale se jodo
    delete target;                  // target ki memory free karo
}

int main()
{
    node *a = new node();
    node *b = new node();
    node *c = new node();

    a->data = 5;
    b->data = 10;
    c->data = 20;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;

    deleteAtPosition(head,1);
    node *i = head;
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
}