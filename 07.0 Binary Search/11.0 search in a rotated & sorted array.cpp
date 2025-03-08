#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int findpivot(vector<int> arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (s == e)
                return s;
            if (mid <= e && arr[mid] > arr[mid + 1])
                return mid;
            if (mid - 1 >= s && arr[mid - 1] > arr[mid])
                return mid - 1;
            if (arr[s] > arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
            mid = s + (e - s) / 2;
        }
        return -1;
    }

    int bs(vector<int> arr, int i, int j, int key)
    {
        while (i <= j)
        {
            int mid = i + (j - i) / 2;
            if (arr[mid] == key)
            {
                return mid;
            }
            else if (arr[mid] > key)
            {
                j = mid - 1;
            }
            else
            {
                i = mid + 1;
            }
        }
        return -1;
    }
    int search(vector<int> &nums, int target)
    {
        int pi = findpivot(nums);
        int ans = 0;
        if (target >= nums[0] && target <= nums[pi])
        {
            ans = bs(nums, 0, pi, target);
        }
        else
        {
            ans = bs(nums, pi + 1, nums.size() - 1, target);
        }
        return ans;
    }
};
int main()
{

    return 0;
}