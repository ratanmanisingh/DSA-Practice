#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the number of elements in first array: ";
    cin>>n;
    int a1[20];
    for (int i=0;i<n;i++){
        cin>>a1[i];
    }
    int m;
    cout<< "Enter the number of elements in second array: ";
    cin>>m;
    int a2[20];
    for (int i=0;i<m;i++){
        cin>>a2[i];
    }
    int c[40];
    for (int i=0;i<n;i++){
        c[i]=a1[i];
    }
    for (int i=0;i<m;i++){
        c[n+i]=a2[i];
    }
    for (int i=0;i<n+m;i++){
        cout<<c[i];
    }

}