#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int maxArea(vector<int>& height) {
    int left = 0;
    int right = height.size() - 1;
    int maxArea = 0;

    while (left < right) {
        int currentArea = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, currentArea);

        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }

    return maxArea;
}
int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << "Maximum area: " << maxArea(height) << endl;
    return 0;
}