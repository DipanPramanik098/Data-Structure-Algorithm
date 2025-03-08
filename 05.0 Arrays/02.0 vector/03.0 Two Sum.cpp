#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {}; // No solution found
    }
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = twoSum(nums, target);

    if (!result.empty()) {
        cout << "Pair found at indexes: " << result[0] << " and " << result[1] << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}