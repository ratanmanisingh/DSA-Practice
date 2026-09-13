#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    node *tail = NULL;

    // Taking input
    for (int i = 0; i < n; i++)
    {
        node *newnode = new node();
        cout << "Enter numbers: ";
        cin >> newnode->data;
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        tail->next = newnode;
        tail = newnode;
    }
    // Printing the elements
    node *i = head;
    while (i != NULL)
    {
        cout << i->data << endl;
        i = i->next;
    }

    // For finding middle element

    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data;
    return 0;
}