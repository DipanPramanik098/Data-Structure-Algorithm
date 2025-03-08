#include <iostream>
using namespace std;

// Function to compute GCD using Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Compute and display GCD
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;

    return 0;
}