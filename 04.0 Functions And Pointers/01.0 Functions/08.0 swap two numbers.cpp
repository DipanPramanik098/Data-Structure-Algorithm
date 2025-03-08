#include <iostream>
using namespace std;

// Function to swap two numbers
void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Display numbers before swapping
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    // Call the swap function
    swapNumbers(num1, num2);

    // Display numbers after swapping
    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}