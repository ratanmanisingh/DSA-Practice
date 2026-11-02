#include <iostream>
using namespace std;

const int size = 100;
int stack[size];
int top = -1;

void push(int value)
{
    if (top == size - 1)
    {
        cout << "Stack Overflow!" << endl;
        return;
    }

    top++;
    stack[top] = value;

    cout << value << " pushed into stack." << endl;
}
void display()
{
    if (top == -1)
    {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack element from top to bottom are: " << endl;
    for (int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
}