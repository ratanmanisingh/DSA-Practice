#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void inserBeg(node* &head,int value){
    node* newnode=new node();
    newnode->data=value;
    newnode->next=head;
    head=newnode;
}

int main(){
    node* a=new node();
    node* b=new node();
    node* c=new node();

    a->data = 1;
    b->data = 2;
    c->data = 3;

    a->next=b;
    b->next=c;
    c->next=NULL;

    node* head=a;

    inserBeg(head,0);

    node* i=head;

    while(i!=NULL){
        cout<<i->data<<" ";
        i=i->next;
    }
    return 0;
}