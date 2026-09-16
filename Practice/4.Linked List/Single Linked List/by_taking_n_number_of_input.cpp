#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

int main(){
    // node* a = new node();
    // node* b = new node();
    // node* c = new node();
    int n;
    cin>>n;
    node* head = NULL;
    node* tail = NULL;
    for(int i=0;i<n;i++){
        node* newnode = new node();
        cin>>newnode->data;
        newnode->next=NULL;

        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    node* i = head;
    while(i!=0){
        cout<<i->data<<" ";
        i=i->next;
    }

}
