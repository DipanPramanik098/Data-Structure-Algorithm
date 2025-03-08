#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
#include <cstdlib>  // For abs()


int divide(int dividend, int divisor) {
    // Handle division by zero
    if (divisor == 0) {
        throw runtime_error("Division by zero error");
    }

    // Handle edge case for INT_MIN to avoid overflow during abs()
    if (dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    
    // Determine the sign of the quotient
    bool isNegative = (dividend < 0) ^ (divisor < 0);
    
    // Convert both numbers to long and to their absolute values
    long long absDividend = labs(dividend);
    long long absDivisor = labs(divisor);
    
    // Binary search initialization:
    // The quotient can range from 0 to absDividend.
    long long low = 0, high = absDividend, quotient = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        // Check if mid * absDivisor is within absDividend
        if (mid * absDivisor <= absDividend) {
            quotient = mid;      // mid is a potential quotient
            low = mid + 1;       // try to find a larger quotient
        } else {
            high = mid - 1;      // mid is too large
        }
    }
    
    // Apply the sign
    quotient = isNegative ? -quotient : quotient;
    
    return static_cast<int>(quotient);
}

int main() {
    int dividend, divisor;
    cout << "Enter dividend: ";
    cin >> dividend;
    cout << "Enter divisor: ";
    cin >> divisor;

    try {
        int result = divide(dividend, divisor);
        cout << "Quotient: " << result << endl;
    } catch (const runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}
