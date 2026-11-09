#include<iostream>
using namespace std;

void insertheap(int heap[], int &n, int value){
    int i=n;
    heap[i]=value;
    n++;
    while(i>0){
        int parent = (i-1)/2;
        if(heap[parent]<heap[i]){
            swap(heap[parent], heap[i]);
            i=parent;
        }
        else{
            cout<<"key is low than parent"<<endl;
            break;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int heap[10];
    for(int i=0;i<n;i++){
        cout<<"Enter numbers: ";
        cin>>heap[i];
    }
    for(int i=0;i<n;i++){
        cout<<heap[i]<<endl;
        if(i>0){
            int parent = (i-1)/2;
            cout<<"Parent of node is "<<heap[parent]<<endl;
        }
        else{
            cout<<"No parent"<<endl;
        }
        int left = 2*i+1;
        if(left<n){
            cout<<"Left child is "<<heap[left]<<endl;
        }
        else{
            cout<<"No left child"<<endl;
        }
        int right = 2*i+2;
        if(right<n){   
            cout<<"Right child is "<<heap[right]<<endl;
        }
        else{
            cout<<"No right child"<<endl;
        }
    }
}