#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    string sortVowels(string s)
    {
        vector<int> l(26, 0);
        vector<int> u(26, 0);
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                l[ch - 'a']++;
                s[i] = '#';
            }
            else if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                u[ch - 'A']++;
                s[i] = '#';
            }
        }
        string vowel;
        // upper case
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'A';
            while (u[i])
            {
                vowel += ch;
                u[i]--;
            }
        }
        // lower case
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'a';
            while (l[i])
            {
                vowel += ch;
                l[i]--;
            }
        }
        int index = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                s[i] = vowel[index];
                index++;
            }
        }
        return s;
    }
};
int main()
{

    return 0;
}