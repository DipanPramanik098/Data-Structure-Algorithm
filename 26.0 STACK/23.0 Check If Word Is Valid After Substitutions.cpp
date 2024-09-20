#include <bits/stdc++.h>
#include <iostream>
using namespace std;
bool isValid(string s)
{
    if (s[0] != 'a')
        return false;

    stack<char> st;
    for (char ch : s)
    {
        if (ch == 'a')
        {
            st.push(ch);
        }
        else if (ch == 'b')
        {
            if (!st.empty() && st.top() == 'a')
            {
                st.push(ch);
            }
            else
                return false;
        }
        else
        {
            // ch == 'c'
            if (!st.empty() && st.top() == 'b')
            {
                st.pop();
                if (!st.empty() && st.top() == 'a')
                {
                    st.pop();
                }
                else
                    return false;
            }
            else
                return false;
        }
    }
    return st.empty();
}
int main()
{

    return 0;
}