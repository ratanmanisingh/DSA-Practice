#include <iostream>
using namespace std;

const int size = 100;
int arr[size];
int top = -1;

void push(int value)
{
    if (top == size - 1)
    {
        cout << "arr Overflow!" << endl;
        return;
    }

    top++;
    arr[top] = value;

    cout << value << " pushed into arr." << endl;
}

void peek()
{
    if (top == -1)
    {
        cout << "arr is empty!" << endl;
        return;
    }
    cout << "Top element: " << arr[top] << endl;
}

void display()
{
    if (top == -1)
    {
        cout << "arr is empty" << endl;
        return;
    }
    cout << "element from top to bottom are: " << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    peek();
}