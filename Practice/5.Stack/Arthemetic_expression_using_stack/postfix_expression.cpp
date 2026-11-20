#include <iostream>
using namespace std;

int main()
{
    string exp = "234*+";
    int st[100];
    int top = -1;

    for (int i = 0; i < exp.length(); i++)
    {
        char ch = exp[i];

        if (ch >= '0' && ch <= '9')
        {
            st[++top] = ch - '0'; // char ko number me badlo, push karo
        }
        else
        {
            int b = st[top--]; // pehla pop = right operand
            int a = st[top--]; // doosra pop = left operand

            if (ch == '+')
                st[++top] = a + b;
            else if (ch == '-')
                st[++top] = a - b;
            else if (ch == '*')
                st[++top] = a * b;
            else if (ch == '/')
                st[++top] = a / b;
        }
    }

    cout << "Result: " << st[top] << endl; // 14
    return 0;
}