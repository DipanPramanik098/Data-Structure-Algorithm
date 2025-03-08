#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    vector<int> sumZero(int n)
    {
        vector<int> v;
        if (n % 2 != 0)
            v.push_back(0);
        n = (n / 2) * 2;
        for (int i = 1; i <= n / 2; i++)
        {
            v.push_back(i);
            v.push_back(i * -(1));
        }
        return v;
    }
};
int main()
{

    return 0;
}