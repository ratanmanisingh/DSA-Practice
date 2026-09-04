#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    node* a=new node();
    node* b=new node();
    a->data=9;
    a->next=b;
    b->data=4;
    b->next=NULL;
    node* head = a;
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<" ";
        current = current->next;
    }
}