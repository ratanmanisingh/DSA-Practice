#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter numbers: ";
        cin >> arr[i];
    }
    int a;
    cout << "Enter the Number you want to insert: ";
    cin >> a;
    if (n < 10) 
    {
        arr[n] = a; 
        n++; 
    }
    else
    {
        cout << "Array is full. Cannot insert new element." << endl;
    }
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}