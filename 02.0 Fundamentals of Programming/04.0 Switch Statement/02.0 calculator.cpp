#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    char operation;
    double num1, num2;

    // Display a menu for the user
    cout << "Welcome to the Calculator Program!" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    // Input the numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform the operation using a switch case
    switch (operation) {
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
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Error: Invalid operation entered." << endl;
            break;
    }
    return 0;
}