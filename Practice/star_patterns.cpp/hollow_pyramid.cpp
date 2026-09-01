#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << endl;
    for (int i=0;i<n;i++){
        for (int j=0;j<n-i-1;j++)
        {
            cout << " ";
        }
        for (int k=0;k<2*i+1;k++){
            if (k==0 || k==2*i){
                cout<< "*";
            }
            else{
                cout << " ";
            }
        }
        cout<<endl;
        }
        for (int i=0;i<n-1;i++){
            for (int j=0;j<i+1;j++){
                cout<<" ";
            }
            for (int k=0;k<2*(n-i-1)-1;k++){
                if (k==0 || k==2*(n-i-1)-2){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
}