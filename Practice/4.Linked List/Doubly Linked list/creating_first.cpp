#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

int main(){
    node* a = new node();
    node* b = new node();
    node* c = new node();

    a->data=10;
    b->data=20;
    c->data=30;

    a->next=b;
    b->next=c;
    c->next=NULL;

    a->prev=NULL;
    b->prev=a;
    c->prev=b;

    node* head = a;

    node* i=head;

    // Traversal (forward)
    while(i!=NULL){
        cout<<i->data<<" ";
        i = i->next;
    }
}