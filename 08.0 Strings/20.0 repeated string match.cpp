#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    // lpsfind
    void lpsfind(vector<int> &lps, string s)
    {
        // Your code goes here
        int prefix = 0, suffix = 1;

        while (suffix < s.size())
        {

            // Match
            if (s[prefix] == s[suffix])
            {
                lps[suffix] = prefix + 1;
                prefix++;
                suffix++;
            }
            // Not Matched
            else
            {
                if (prefix == 0)
                {
                    lps[suffix] = 0;
                    suffix++;
                }
                else
                {
                    prefix = lps[prefix - 1];
                }
            }
        }
    }
    int KMP(string haystack, string needle)
    {
        vector<int> lps(needle.size(), 0);
        lpsfind(lps, needle);

        int first = 0, second = 0;
        while (first < haystack.size() && second < needle.size())
        {
            // Match
            if (haystack[first] == needle[second])
            {
                first++, second++;
            }
            // Notmatch
            else
            {
                if (second == 0)
                    first++;
                else
                    second = lps[second - 1];
            }
        }

        // answer exit
        if (second == needle.size())
            return 1;
        return 0;
    }
    int repeatedStringMatch(string a, string b)
    {
        if (a == b)
            return 1;
        int repeat = 1;
        string temp = a;

        while (temp.size() < b.size())
        {
            temp += a;
            repeat++;
        }
        // KMP match
        if (KMP(temp, b) == 1)
            return repeat;
        // temp+a , KMP Match
        if (KMP(temp + a, b) == 1)
            return repeat + 1;

        return -1;
    }
};
int main()
{

    return 0;
}