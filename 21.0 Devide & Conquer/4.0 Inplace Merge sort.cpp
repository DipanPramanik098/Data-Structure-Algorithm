#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void mergeInplace(vector<int> &nums, int s, int mid, int e)
{
    int total_size = e - s + 1;
    int gap = (total_size / 2) + (total_size % 2);
    while (gap > 0)
    {
        int i = s, j = i + gap;
        while (j <= e)
        {
            if (nums[i] > nums[j])
            {
                swap(nums[i], nums[j]);
            }
            i++;
            j++;
        }
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }
}

void mergeSort(vector<int> &nums, int s, int e)
{
    if (s >= e)
        return;
    int mid = s + (e - s) / 2;
    mergeSort(nums, s, mid);
    mergeSort(nums, mid + 1, e);
    mergeInplace(nums, s, mid, e);
}

vector<int> sortArray(vector<int> &nums)
{
    mergeSort(nums, 0, nums.size() - 1);
    return nums;
}
int main()
{

    return 0;
}