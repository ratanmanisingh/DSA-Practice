#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void inserEnd(node* &head, int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if(head==NULL){
        head=newnode;
        return;
    }

    node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
}

int main()
{
    node* a = new node();
    node* b = new node();
    node* c = new node();

    a->data = 1;
    b->data = 2;
    c->data = 3;

    a->next=b;
    b->next=c;
    c->next=NULL;

    node* head = a;

    inserEnd(head,4);

    node* i = head;
    while(i!=NULL){
        cout<<i->data<<" ";
        i=i->next;
    }
    return 0;
}
