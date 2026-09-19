#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void delend(node* &head)
{
    if (head == NULL)
        return;

    if (head->next==NULL){
        delete head;
        head = NULL;
        return;
    }

    node *temp = head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
}


int main(){
    node* a = new node();
    node* b = new node();
    node* c = new node();

    a->data = 5;
    b->data = 10;
    c->data = 20;

    a->next = b;
    b->next = c;
    c->next = NULL;

    node *head = a;

    delend(head);
    node *i = head;
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
}