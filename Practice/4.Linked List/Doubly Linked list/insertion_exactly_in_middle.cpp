#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int x)
    {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};

void insertMiddle(Node* &head, int value)
{
    if (head == nullptr)
    {
        head = new Node(value);
        return;
    }

    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node *newNode = new Node(value);

    newNode->prev = slow->prev;
    newNode->next = slow;

    if (slow->prev != nullptr)
        slow->prev->next = newNode;
    else
        head = newNode;

    slow->prev = newNode;
}
