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
    // node* i = head;               //(By using while loop)   
    // while (i!=NULL){
    //     cout<<i->data<<endl;
    //     i= i->next;
    // }
    for (node* i=head;i!=NULL;i=i->next){    //(By using for loop)
        cout << i->data << endl;
    }
    return 0;
}