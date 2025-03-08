#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int hammingWeight(int n)
    {
        int count = 0;
        while (n)
        {
            if (n & 1)
                count++;
            n = n >> 1;
        }
        return count;
    }
};
int main()
{

    return 0;
}