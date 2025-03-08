#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Function to calculate the amount of wood that can be collected at height H
long long getWoodAmount(const vector<int>& trees, int H) {
    long long totalWood = 0;
    for (int height : trees) {
        if (height > H) {
            totalWood += (height - H);
        }
    }
    return totalWood;
}

// Function to find the maximum sawblade height
int findMaxSawHeight(const vector<int>& trees, long long M) {
    int left = 0, right = *max_element(trees.begin(), trees.end());
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        long long wood = getWoodAmount(trees, mid);
        
        if (wood >= M) { // Can collect enough wood
            result = mid; // Store the possible height
            left = mid + 1; // Try for a higher height
        } else {
            right = mid - 1; // Lower the height
        }
    }
    return result;
}

int main() {
    int N;
    long long M;
    cin >> N >> M;
    
    vector<int> trees(N);
    for (int i = 0; i < N; i++) {
        cin >> trees[i];
    }
    
    cout << findMaxSawHeight(trees, M) << endl;
    return 0;
}