#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

void deleteAtPosition(node *&head, int pos)
{
    if (head == NULL)
        return;

    node *curr = head;
    for (int i = 1; i < pos; i++){
        curr = curr->next; // seedha target node tak pahuncho
    }

    if (curr->prev != NULL){
        curr->prev->next = curr->next; // peeche wale ko aage se jodo
    }
    else{
        head = curr->next; // curr hi head tha
    }

    if (curr->next != NULL){
        curr->next->prev = curr->prev; // aage wale ko peeche se jodo
    }
    delete curr;
}