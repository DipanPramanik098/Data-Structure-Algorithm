#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int solve(int n)
{
    if (n == 0)
        return 1;
    if (n < 0)
        return 0;

    int ans = INT_MAX;
    int i = 1;
    int end = sqrt(n);
    while (i <= end)
    {
        int sqr = i * i;
        int countsqr = 1 + solve(n - sqr);
        if (countsqr < ans)
            ans = countsqr;

        i++;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    cout << solve(n) - 1;
    return 0;
}