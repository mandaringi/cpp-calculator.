#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string expression;
    double a, b, result = 0;
    char op;
    cout << "Enter expression: ";
    getline(cin, expression);
    stringstream ss(expression);

    if (!(ss >> a)) {
        cout << "Invalid expression";
        return 0;
    }
    while (ss >> op) {
        if (!(ss >> b)) {
            cout << "Invalid expression";
            return 0;
        }
        if (op == '*') {
            a = a * b;
        }
        else if (op == '/') {
            if (b == 0) {
                cout << "Cannot divide by zero";
                return 0;
            }
            a = a / b;
        }
        else if (op == '+') {
            result = result + a;
            a = b;
        }
        else if (op == '-') {
            result = result + a;
            a = -b;
        }
        else {
            cout << "Invalid operator";
            return 0;
        }
    }
    cout << "Result: " << result + a;
    return 0;
}