#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // Key not found
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[10];
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search: ";
    cin >> key;

    int result = binarysearch(arr, n, key);
    if (result != -1)
    {
        cout << "Key found at index: " << result << endl;
    }
    else
    {
        cout << "Key not found" << endl;
    }

    return 0;
}