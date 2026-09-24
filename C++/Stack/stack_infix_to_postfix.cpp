#include <iostream>
#include <stack>
#include <string>
using namespace std;

int precedence(char ch) {
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}

int main() {
    stack<char> s;

    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;

    string postfix;

    for (int i = 0; i < infix.length(); i++) {

        // Operand
        if ((infix[i] >= 'a' && infix[i] <= 'z') ||
            (infix[i] >= 'A' && infix[i] <= 'Z') ||
            (infix[i] >= '0' && infix[i] <= '9')) {

            postfix += infix[i];
        }

        // Opening parenthesis
        else if (infix[i] == '(') {
            s.push(infix[i]);
        }

        // Closing parenthesis
        else if (infix[i] == ')') {

            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }

            if (!s.empty())
                s.pop();
        }

        // Operator
        else if (infix[i] == '+' || infix[i] == '-' ||
                 infix[i] == '*' || infix[i] == '/' ||
                 infix[i] == '%' || infix[i] == '^') {

            while (!s.empty() && s.top() != '(' &&
                   (precedence(s.top()) > precedence(infix[i]) ||
                   (precedence(s.top()) == precedence(infix[i])
                    && infix[i] != '^'))) {

                postfix += s.top();
                s.pop();
            }

            s.push(infix[i]);
        }

        else {
            cout << "Wrong operator or operand" << endl;
            return 0;
        }
    }

    // Pop remaining operators
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }

    cout << "Postfix expression: " << postfix << endl;

    return 0;
}