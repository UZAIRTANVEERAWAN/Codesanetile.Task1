#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;
    char choice; // For repeating calculations

    cout << "============================================\n";
    cout << "      Welcome to the Calculation World   \n";
    cout << "          UZAIR TANVEER AWAN   \n";
    cout << "============================================\n\n";

    do {
        // Take numbers first
        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        // Take operator after numbers
        cout << "Enter an operator (+, -, *, /): ";
        cin >> op;

        cout << "\n--------------------------------------------\n";

        // If-else to check valid operator
        if (op == '+' || op == '-' || op == '*' || op == '/') {
            // Switch for operation selection
            switch (op) {
                case '+':
                    result = num1 + num2;
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case '-':
                    result = num1 - num2;
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case '*':
                    result = num1 * num2;
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case '/':
                    if (num2 != 0) {
                        result = num1 / num2;
                        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                    } else {
                        cout << "Error: Division by zero is not allowed!" << endl;
                    }
                    break;
            }
        } else {
            cout << "?? Invalid operator entered!" << endl;
        }

        cout << "--------------------------------------------\n";

        // Ask if user wants to calculate again
        cout << "Do you want to perform more calculations? (y/n): ";
        cin >> choice;
        cout << "\n";

    } while (choice == 'y' || choice == 'Y');  // repeat if yes

    cout << "============================================\n";
    cout << "   Thanks for using the Calculator. Bye!  \n";
    cout << "============================================\n";

    return 0;
}

