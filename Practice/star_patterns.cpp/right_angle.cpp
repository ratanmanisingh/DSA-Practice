#include <iostream>
using namespace std;

// 1. Right angle triangle.

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}


// 2. ABC in the form of Right angle triangle.

int main()
{
    int n;
    cout << "Enter any Number: ";
    cin >> n;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }
}

// 3. ABC with a sequence where every character with respect of line of the code.

int main()
{
    int n;
    cout << "Enter any Number: ";
    cin >> n;
    char ch = 'A';
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            cout<<ch;
        }
        ch++;
        cout << endl;
    }
}