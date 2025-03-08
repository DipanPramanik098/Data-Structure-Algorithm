#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // nsp - number of spaces, nst - number of stars
    int nst = 1;
    int nsp = n - 1;

    for (int i = 1; i <= 2 * n - 1; i++) {
        // spaces
        for (int j = 1; j <= nsp; j++) {
            cout << " ";
        }

        // stars
        for (int j = 1; j <= nst; j++) {
            cout << "*";
        }

        cout << endl;

        if (i < n) {
            nsp--;  // Decrease spaces
            nst += 2;  // Increase stars
        } else {
            nsp++;  // Increase spaces
            nst -= 2;  // Decrease stars
        }
    }

    return 0;
}
