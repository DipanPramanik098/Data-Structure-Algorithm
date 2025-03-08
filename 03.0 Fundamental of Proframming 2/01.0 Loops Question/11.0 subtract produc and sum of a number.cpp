#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int sum = 0;
        int prod = 1;
        while (n)
        {
            int ld = n % 10;
            sum += ld;
            prod *= ld;
            n /= 10;
        }
        return prod - sum;
    }
};
int main()
{

    return 0;
}