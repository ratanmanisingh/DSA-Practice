#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};

void insertAtPosition(node* &head, int value, int pos)
{
    node* newnode = new node();
    newnode->data = value;

    if (pos == 1)
    {
        newnode->prev = NULL;
        newnode->next = head;
        if (head != NULL)
            head->prev = newnode;
        head = newnode;
        return;
    }

    node* prevNode = head;
    for (int i = 1; i < pos - 1; i++)
    {
        prevNode = prevNode->next;                  // target se pehle wale tak pahuncho
    }

    newnode->next = prevNode->next;                // step 2
    newnode->prev = prevNode;                      // step 3

    if (prevNode->next != NULL)
    {
        prevNode->next->prev = newnode;           // step 4: agle node ka prev fix
    }

    prevNode->next = newnode;                    // step 5

    node* i = head;
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
    node* head = NULL;
    
    for (int i = 0; i < n; i++)
    {
        node* newnode = new node();
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
            node* last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = newnode;
            newnode->prev = last;
        }
    }
    insertAtPosition(head, 6, 2);
}
