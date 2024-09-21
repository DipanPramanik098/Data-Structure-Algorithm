#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    string decodeString(string s)
    {
        stack<string> st;
        for (auto ch : s)
        {
            if (ch == ']')
            {
                string strToRepeat = "";
                // find strToRepeat
                while (!st.empty() && st.top() != "[")
                {
                    string top = st.top();
                    st.pop();
                    strToRepeat += top;
                }
                st.pop();

                // find the no of time to repeat
                string numericTime = "";
                while (!st.empty() && isdigit(st.top()[0]))
                {
                    numericTime += st.top();
                    st.pop();
                }
                reverse(numericTime.begin(), numericTime.end());
                int n = stoi(numericTime);

                // Final Decoding

                string currdecode = "";
                while (n--)
                {
                    currdecode += strToRepeat;
                }
                st.push(currdecode);
            }
            else
            {
                string temp(1, ch);
                st.push(temp);
            }
        }
        string ans;
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{

    return 0;
}