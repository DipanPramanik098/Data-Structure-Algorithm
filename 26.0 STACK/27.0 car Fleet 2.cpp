#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Solution
{
public:
    vector<double> getCollisionTimes(vector<vector<int>> &cars)
    {
        vector<double> ans(cars.size(), -1);
        stack<int> st;
        for (int i = cars.size() - 1; i >= 0; i--)
        {
            while (!st.empty() && cars[st.top()][1] >= cars[i][1])
            {
                st.pop();
            }
            while (!st.empty())
            {
                double coltime = (double)(cars[st.top()][0] - cars[i][0]) / (double)(cars[i][1] - cars[st.top()][1]);
                if (ans[st.top()] == -1 || coltime <= ans[st.top()])
                {
                    ans[i] = coltime;
                    break;
                }
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
int main()
{

    return 0;
}