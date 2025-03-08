#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution
{
public:
    int lowerbound(vector<int> &arr, int k)
    {
        int i = 0;
        int j = arr.size() - 1;
        int ans = j;
        while (i <= j)
        {
            int mid = i + (j - i) / 2;
            if (arr[mid] >= k)
            {
                ans = mid;
                j = mid - 1;
            }
            else if (arr[mid] > k)
                j = mid - 1;
            else
                i = mid + 1;
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        int h = lowerbound(arr, x);
        int l = h - 1;
        while (k--)
        {
            if (l < 0)
                h++;
            else if (h >= arr.size())
                l--;
            else if (x - arr[l] > arr[h] - x)
                h++;
            else
                l--;
        }
        return vector<int>(arr.begin() + l + 1, arr.begin() + h);
    }
};
int main()
{

    return 0;
}