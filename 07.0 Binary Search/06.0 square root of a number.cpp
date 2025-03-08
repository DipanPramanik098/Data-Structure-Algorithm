#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Function to compute the integer part of the square root using binary search
int integerSqrt(int num) {
    int low = 0, high = num, ans = 0;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (mid * mid <= num) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    int n, no_afterPoint;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Enter number of digits needed after point: ";
    cin >> no_afterPoint;

    // Find the integer part of the square root.
    int intPart = integerSqrt(n);
    double finalAns = intPart;
    double step = 0.1;

    // Refine the answer for the required decimal places.
    for (int i = 0; i < no_afterPoint; i++) {
        while ((finalAns + step) * (finalAns + step) <= n) {
            finalAns += step;
        }
        // Move to next decimal place
        step /= 10;
    }
    
    cout << "Square root: " << fixed << setprecision(no_afterPoint) << finalAns << endl;
    return 0;
}
