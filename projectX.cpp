#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        double num1, num2;
        char op;

        cout << "Enter 1st number: ";
        cin >> num1;

        cout << "Enter 2nd number: ";
        cin >> num2;

        cout << "Enter operation (+, -, *, /): ";
        cin >> op;

        switch (op) {
        case '+':
            cout << "Result: " << num1 + num2 << endl;
            break;

        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;

        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;

        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            }
            else {
                cout << "Error: Division by zero" << endl;
            }
            break;

        default:
            cout << "Invalid operation" << endl;
            break;
        }

        cout << "Do you want to perform another operation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
