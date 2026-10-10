#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void searchElement(node *head, int value)
{
    node *temp = head;

    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            cout << "Element found" << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Element not found" << endl;
}

int main()
{
    node *head = new node;
    head->data = 10;
    head->prev = nullptr;
    head->next = new node;
    head->next->data = 20;
    head->next->prev = head;
    head->next->next = new node;
    head->next->next->data = 30;
    head->next->next->prev = head->next;
    head->next->next->next = nullptr;

    searchElement(head, 20);
    searchElement(head, 40);

    return 0;
}
