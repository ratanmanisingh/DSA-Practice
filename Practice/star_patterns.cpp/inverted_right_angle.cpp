#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any Number: ";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0; j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


