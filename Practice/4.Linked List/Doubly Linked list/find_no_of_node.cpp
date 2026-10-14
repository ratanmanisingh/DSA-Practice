#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

int countNodes(node *head)
{
    int count = 0;
    node *temp = head;

    while (temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;
    node* head = NULL;

    for (int i = 0; i < n; i++)
    {
        node* newnode = new node();
        cout << "Enter element: ";
        cin >> newnode->data;
        newnode->next = head;
        newnode->prev = nullptr;

        if (head != nullptr)
            head->prev = newnode;

        head = newnode;
    }

    int totalNodes = countNodes(head);
    cout << "Total number of nodes: " << totalNodes << endl;

    return 0;
}
