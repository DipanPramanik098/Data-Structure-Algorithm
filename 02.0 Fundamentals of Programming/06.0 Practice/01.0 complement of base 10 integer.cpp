#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int mask = 1;
        int m = n;
        int ans = n;
        if (n == 0)
            return 1;
        while (m != 0)
        {
            ans = ans ^ mask;
            mask = mask << 1;
            m = m >> 1;
        }
        return ans;
    }
};
int main()
{

    return 0;
}