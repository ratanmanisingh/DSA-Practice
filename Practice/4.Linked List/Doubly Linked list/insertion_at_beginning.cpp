#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node* prev;
};

void insertAtBeginning(node* &head,int value){
    node* newnode = new node();
    newnode->data = value;
    newnode->prev = NULL;

    newnode->next = head;

    if(head!=NULL){
        head->prev = newnode;
    }
    head = newnode;
    node *i = head;
    while (i != NULL)
    {
        cout << i->data << " ";
        i = i->next;
    }
}

int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    node* head = NULL;
    for(int i=0;i<n;i++){
        node* newnode = new node();
        cout<<"Enter element: ";
        cin>>newnode->data;
        newnode->next=NULL;
        newnode->prev=NULL;

        // Attach the new node after the current last node.
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *last = head;
            while (last->next != NULL)
            {
                last = last->next;
            }
            last->next = newnode;
            newnode->prev = last;
        }
    }
    insertAtBeginning(head,6);
}