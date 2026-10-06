#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void deleteAtEnd(node *&head)
{
    if (head == NULL)
        return;

    if (head->next == NULL)
    { // only one node
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next; // last node tak pahuncho
    }

    temp->prev->next = NULL; // second-last ka next NULL karo
    delete temp;
}

int main(){
    
}