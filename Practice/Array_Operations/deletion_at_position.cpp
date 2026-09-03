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
    int pos;
    cout << "Enter the position which you want to delete: ";
    cin >> pos;
    if (pos < 0 || pos >= n)
    {
        cout << "Invalid position!\n";
        return 0;
    }
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    n--; // reduce size after deletion
    cout << "Array after Deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
