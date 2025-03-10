#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
bool is_sorted(vector<int> &v, int n)
{
    // base case - if index reaches to zero
    if (n <= 0)
        return true;

    // process- check if lesser
    if (v[n] < v[n - 1])
        return false;
    // recursive call
    is_sorted(v, n - 1);
}
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8};
    vector<int> b = {1, 2, 3, 4, 5, 6, 3, 1};

    // function call
    cout << is_sorted(a, a.size() - 1) << endl;
    cout << is_sorted(b, b.size() - 1) << endl;
    return 0;
}