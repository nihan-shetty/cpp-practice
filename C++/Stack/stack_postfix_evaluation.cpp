#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<int> s;

    string postfix;
    cout << "Enter a postfix expression: ";
    cin >> postfix;

    for (int i = 0; i < postfix.length(); i++) {

        // If it is an operand
        if (postfix[i] >= '0' && postfix[i] <= '9') {
            s.push(postfix[i] - '0');
        }

        // If it is an operator
        else if (postfix[i] == '+' || postfix[i] == '-' ||
                 postfix[i] == '*' || postfix[i] == '/') {

            int second = s.top();
            s.pop();

            int first = s.top();
            s.pop();

            int result;

            if (postfix[i] == '+')
                result = first + second;
            else if (postfix[i] == '-')
                result = first - second;
            else if (postfix[i] == '*')
                result = first * second;
            else
                result = first / second;

            s.push(result);
        }

        else {
            cout << "Invalid expression" << endl;
            return 0;
        }
    }

    cout << "Result: " << s.top() << endl;

    return 0;
}