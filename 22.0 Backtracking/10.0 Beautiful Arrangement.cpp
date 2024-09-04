#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void CountArrangementHelper(vector<int> &v, int &n, int &ans, int currnum)
{
    // base case
    if (currnum == n + 1)
    {
        ans++;
        return;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (v[i] == 0 && (currnum % i == 0 || i % currnum == 0))
        {
            v[i] = currnum;
            CountArrangementHelper(v, n, ans, currnum + 1);
            v[i] = 0;
        }
    }
}
int countArrangement(int n)
{
    vector<int> v(n + 1);
    int ans = 0;
    CountArrangementHelper(v, n, ans, 1);
    return ans;
}
int main()
{

    return 0;
}