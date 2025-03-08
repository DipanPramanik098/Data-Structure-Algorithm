#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int main() {
    float a, b, c;
    
    // Take input for the three sides of the triangle
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;
    
    // Check if the input values satisfy the triangle inequality theorem
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The given sides can form a triangle." << endl;
    } else {
        cout << "The given sides cannot form a triangle." << endl;
    }

    return 0;
}
