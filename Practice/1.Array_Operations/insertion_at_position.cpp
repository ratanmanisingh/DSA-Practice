#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[50];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int position;
    int element;
    cout<<"Enter the Index number where you want to insert: ";
    cin>>position;
    cout<<"Enter the elements you want to insert: ";
    cin>>element;
    for(int i=n;i>=position-1;i--){
        arr[i + 1] = arr[i];
    }
    arr[position]=element;
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}