#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main(){
    int n;
    cin>>n;
    node* head = NULL;
    node* tail = NULL;
    for(int i=0;i<n;i++){
        node* newnode= new node();
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            tail=newnode;

        }
        else{
            tail->next=newnode;
            tail=newnode;
        }

    }
    tail->next=head;
    node* current=head;

    do{
        cout<<current->data<<" ";
        current=current->next;
    }while(current!=head);
    return 0;
}