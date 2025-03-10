#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// Function to maximize cuts
int maximizeTheCuts(int n, int x, int y, int z) {
    // Base Cases
    if (n == 0) return 0;       // If no length is left, return 0 cuts
    if (n < 0) return INT_MIN;  // Invalid case

    // Recursive calls for all possible cuts
    int ans1 = maximizeTheCuts(n - x, x, y, z) + 1;
    int ans2 = maximizeTheCuts(n - y, x, y, z) + 1;
    int ans3 = maximizeTheCuts(n - z, x, y, z) + 1;

    // Get the maximum number of cuts
    int ans = max(ans1, max(ans2, ans3));

    return ans;
}

int main() {
    int n = 7, x = 5, y = 2, z = 2;
    int ans = maximizeTheCuts(n, x, y, z);

    // If ans is negative, return 0 (meaning no valid cuts possible)
    if (ans < 0) ans = 0;

    cout << ans;
    return 0;
}