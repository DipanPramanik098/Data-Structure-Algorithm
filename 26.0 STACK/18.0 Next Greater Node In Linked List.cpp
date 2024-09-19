#include <bits/stdc++.h>
#include <iostream>
using namespace std;
vector<int> nextLargerNodes(ListNode *head)
{
    vector<int> ll;
    while (head)
    {
        ll.push_back(head->val);
        head = head->next;
    }
    stack<int> st;
    vector<int> ans(ll.size(), 0);

    for (int i = 0; i < ll.size(); i++)
    {
        while (!st.empty() && ll[i] > ll[st.top()])
        {
            int kids = st.top();
            st.pop();
            ans[kids] = ll[i];
        }
        st.push(i);
    }
    return ans;
}
int main()
{

    return 0;
}