#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int longestPalindrome(string s)
    {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);

        // store count
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'a')
            {
                lower[s[i] - 'a']++;
            }
            else
            {
                upper[s[i] - 'A']++;
            }
        }

        // check even odd and store
        int count = 0;
        bool odd = 0;
        for (int i = 0; i < 26; i++)
        {
            // lower vector
            if (lower[i] % 2 == 0)
                count += lower[i];
            else
            {
                count += lower[i] - 1;
                odd = 1;
            }

            // upper vector check
            if (upper[i] % 2 == 0)
                count += upper[i];
            else
            {
                count += upper[i] - 1;
                odd = 1;
            }
        }
        return count + odd;
    }
};
int main()
{

    return 0;
}