#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void inserEnd(node *&head, int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;

    if(head==NULL){
        head=newnode;
    }

    node* current=head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next=newnode;
}

int main()
{
    node *a = new node();
    node *b = new node();
    node *c = new node();

    a->data = 1;
    b->data = 2;
    c->data = 3;
    

}
