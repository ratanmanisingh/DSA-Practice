#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void delpos(node *&head, int pos)
{
    if (head == nullptr)
        return;

    if (pos == 1){
        node *target = head;
        head = head->next;
        delete target;
        return;
    }
    node *temp = head;

    for (int i=1; i<pos-1 && temp->next !=nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
        return;

    node *target = temp->next;
    temp->next = target->next;
    delete target;
}

void printList(node *head){
    while (head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}

int main(){
    node *a = new node{10, nullptr};
    node *b = new node{20, nullptr};
    
    a->next = b;
    node *head = a;

    delpos(head, 2);
    printList(head);
}