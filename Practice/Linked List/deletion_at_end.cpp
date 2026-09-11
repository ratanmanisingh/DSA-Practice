#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};


void delpos(node* &head,int pos){
    node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node* target=temp->next;
    temp->next=temp->next->next;
    temp->next=target->next;
    delete target;
}
int main(){
    node* a = new node();
    node* b = new node();

    
}