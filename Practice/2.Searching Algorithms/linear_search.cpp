#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[10];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<i;
            return 0;
        }
    }cout<<"Not found";
}