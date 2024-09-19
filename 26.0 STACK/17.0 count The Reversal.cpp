#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// https://www.geeksforgeeks.org/problems/count-the-reversals0401/1

int countRev(string s)
{
    // your code here
    // odd size can't possible
    if (s.size() & 1)
        return -1;

    int ans = 0;
    stack<char> st;
    for (char ch : s)
    {
        if (ch == '{')
            st.push(ch);
        else
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                st.push(ch);
            }
        }
    }
    // if stack is still not empty
    while (!st.empty())
    {
        char a = st.top();
        st.pop();
        char b = st.top();
        st.pop();
        if (a == b)
            ans += 1;
        else
            ans += 2;
    }
    return ans;
}
int main()
{

    return 0;
}