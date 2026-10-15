#include <iostream>
using namespace std;

const int MAX = 100;
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }

    top++;
    stack[top] = value;

    cout << value << " pushed into stack." << endl;
}
