#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~

    int maxminsumSlidingWindow(vector<int> &nums, int k)
    {
        deque<int> dq;
        deque<int> dq2;
        int ans =0;


        // first window
        for (int i = 0; i < k; i++)
        {
            // remove all smaller element
            while (!dq.empty() && nums[i] >= nums[dq.back()])
                dq.pop_back();
            // remove all larger elements
            while (!dq2.empty() && nums[i] <= nums[dq2.back()])
                dq2.pop_back();
            // insert index so that we can check element out of the window
            dq.push_back(i);
            dq2.push_back(i);
        }

        ans += nums[dq.front()] + nums[dq2.front()];
        // process remaining window
        for (int i = k; i < nums.size(); i++)
        {
            // Remove out of window element
            if (!dq.empty() && i - dq.front() >= k)
            {
                dq.pop_front();
            }
            if (!dq2.empty() && i - dq2.front() >= k)
            {
                dq2.pop_front();
            }
            // remove all smaller element for current element
            while (!dq.empty() && nums[i] >= nums[dq.back()])
            {
                dq.pop_back();
            }
            while (!dq2.empty() && nums[i] <= nums[dq2.back()])
            {
                dq2.pop_back();
            }
            // Insert the index
            dq.push_back(i);
            dq2.push_back(i);
            // Store answer of current window
            ans += nums[dq.front()] + nums[dq2.front()];
        }
        return ans;
    }

int main()
{
    vector<int>v{2,5,-1,7,-3,-1,-2};
    int k = 4;
    cout<<maxminsumSlidingWindow(v,k)<<endl;
    return 0;
}