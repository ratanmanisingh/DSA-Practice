#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void delBeg(node* &head){
    if(head==NULL){
        cout<<"List is Empty";
        return;
    }
    node* temp=head;
    head=head->next;
    delete temp;
}

int main(){
    node* a = new node();
    node* b = new node();
    node* c = new node();

    a->data=5;
    b->data=10;
    c->data=20;

    a->next=b;
    b->next=c;
    c->next=NULL;

    node* head = a;

    delBeg(head);
    node* i = head;
    while(i!=NULL){
        cout<<i->data<<" ";
        i=i->next;
    }
    return 0;
}