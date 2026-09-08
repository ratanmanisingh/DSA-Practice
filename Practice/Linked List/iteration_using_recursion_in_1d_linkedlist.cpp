#include  <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
void reciter(node* current){
    if(current==NULL){
        return;
    }
    cout<<current->data;
    reciter(current->next);

}

int main()
{
    node *a = new node();
    node *b = new node();
    a->data = 9;
    a->next = b;
    b->data = 4;
    b->next = NULL;
    node *head = a;
    node *current = head;
    reciter(current);

}