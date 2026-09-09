#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    node *a = new node();
    node *b = new node();
    node *c = new node();
    a->data = 9;
    b->data = 5;
    c->data = 4;

    a->next = b;
    b->next = c;
    c->next = a;

    node* head=a;
    node* slow=head;
    node* fast=head;

    bool cyclefound=false;
    while(fast!=NULL&&fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            cyclefound=true;
            break;
        }
    }
    if(cyclefound=true){
        cout<<"Cycle Found";
    }
    else{
        cout<<"Cycle not found";
    }
    return 0;
}