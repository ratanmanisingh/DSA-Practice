#include <cmath>
#include <cctype>
#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>

using namespace std;

int pri(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}

string infixToPostfix(const string &infix)
{
    stack<char> operators;
    string postfix;

    auto isOperand = [](char ch) {
        return isdigit(static_cast<unsigned char>(ch)) || ch == '.';
    };

    for (size_t i = 0; i < infix.length(); ++i)
    {
        char ch = infix[i];

        if (isspace(static_cast<unsigned char>(ch)))
            continue;

        if (isOperand(ch))
        {
            postfix += ch;
            while (i + 1 < infix.length() && isOperand(infix[i + 1]))
            {
                ++i;
                postfix += infix[i];
            }
            postfix += ' ';
        }
        else if (ch == '(')
        {
            operators.push(ch);
        }
        else if (ch == ')')
        {
            while (!operators.empty() && operators.top() != '(')
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }

            if (operators.empty())
                throw invalid_argument("Mismatched parentheses in expression.");

            operators.pop();
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            while (!operators.empty() && operators.top() != '(' && pri(operators.top()) >= pri(ch))
            {
                postfix += operators.top();
                postfix += ' ';
                operators.pop();
            }
            operators.push(ch);
        }
        else
        {
            throw invalid_argument(string("Invalid character in expression: ") + ch);
        }
    }

    while (!operators.empty())
    {
        if (operators.top() == '(')
            throw invalid_argument("Mismatched parentheses in expression.");

        postfix += operators.top();
        postfix += ' ';
        operators.pop();
    }

    return postfix;
}

double evaluatePostfix(const string &postfix)
{
    stack<double> values;
    string token;

    for (char ch : postfix)
    {
        if (isspace(static_cast<unsigned char>(ch)))
        {
            if (token.empty())
                continue;

            double number = stod(token);
            values.push(number);
            token.clear();
            continue;
        }

        if (isdigit(static_cast<unsigned char>(ch)) || ch == '.')
        {
            token += ch;
            continue;
        }

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        {
            if (values.size() < 2)
                throw invalid_argument("Invalid postfix expression.");

            double right = values.top();
            values.pop();
            double left = values.top();
            values.pop();

            switch (ch)
            {
            case '+':
                values.push(left + right);
                break;
            case '-':
                values.push(left - right);
                break;
            case '*':
                values.push(left * right);
                break;
            case '/':
                if (right == 0.0)
                    throw invalid_argument("Division by zero is not allowed.");
                values.push(left / right);
                break;
            case '^':
                values.push(pow(left, right));
                break;
            default:
                throw invalid_argument("Unsupported operator.");
            }
        }
        else
        {
            throw invalid_argument(string("Invalid symbol in postfix expression: ") + ch);
        }
    }

    if (token.size() > 0)
    {
        values.push(stod(token));
    }

    if (values.size() != 1)
        throw invalid_argument("Invalid postfix expression.");

    return values.top();
}

int main()
{
    string expression;

    cout << "Enter an arithmetic expression: ";
    getline(cin, expression);

    try
    {
        const string postfix = infixToPostfix(expression);
        const double result = evaluatePostfix(postfix);
        cout << "Postfix expression: " << postfix << endl;
        cout << "Result: " << result << endl;
    }
    catch (const exception &ex)
    {
        cerr << "Error: " << ex.what() << endl;
        return 1;
    }

    return 0;
}
