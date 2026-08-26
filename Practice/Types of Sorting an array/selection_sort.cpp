#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[10];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter numbers: ";
        cin >> arr[i];
    }
    for (int i=0;i<n-1;i++){
        int smallindex = i;
        for (int j=i+1;j<n;j++){
            if (arr[smallindex]>arr[j]){
                smallindex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallindex];
        arr[smallindex] = temp;
        }
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}