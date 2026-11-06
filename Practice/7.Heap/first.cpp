#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int tree[10];
    for(int i=0;i<n;i++){
        cout<<"Enter numbers: ";
        cin>>tree[i];
    }
    for(int i=0;i<n;i++){
        cout<<tree[i]<<endl;
        if(i>0){
            int parent = (i-1)/2;
            cout<<"Parent of node is "<<tree[parent]<<endl;
        }
        else{
            cout<<"No parent"<<endl;
        }
        int left = 2*i+1;
        if(left<n){
            cout<<"Left child of "<<tree[i]<<" is "<<tree[left]<<endl;
        }
        else{
            cout<<"No left child"<<endl;
        }
        int right = 2*i+2;
        if(right<n){   
            cout<<"Right child of "<<tree[i]<<" is "<<tree[right]<<endl;
        }
        else{
            cout<<"No right child"<<endl;
        }
    }
}