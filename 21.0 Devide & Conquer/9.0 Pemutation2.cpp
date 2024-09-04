#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void p(vector<int> &nums, vector<vector<int>> &ans, int i)
{
    if (i == nums.size())
    {
        ans.push_back(nums);
        return;
    }
    vector<int> use(21, 0);
    for (int j = i; j < nums.size(); j++)
    {
        if (use[nums[j] + 10] == 0)
        {
            swap(nums[i], nums[j]);
            p(nums, ans, i + 1);
            swap(nums[i], nums[j]);
            use[nums[j] + 10] = 1;
        }
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<vector<int>> ans;
    p(nums, ans, 0);
    return ans;
}
int main()
{

    return 0;
}