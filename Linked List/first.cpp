#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

int main(){
    node* a = new node();
    node* b = new node();
    a->data = 3;
    a->next = b;
    b->data = 4;
    b->next = NULL;
    node* head = a;
     
    return 0;
}