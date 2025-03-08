#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// Function to check if it's possible to cook P pratas in given time `mid`
bool isPossible(vector<int>& ranks, int P, int mid) {
    int count = 0;
    for (int rank : ranks) {
        int time = 0, prata = 0, multiplier = 1;
        while (time + (multiplier * rank) <= mid) {
            time += (multiplier * rank);
            prata++;
            multiplier++;
            if (prata >= P) return true;
        }
    }
    return count >= P;
}

// Function to find the minimum time needed to cook P pratas
int minTimeToCook(vector<int>& ranks, int P) {
    int left = 0, right = 1e8, result = right;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (isPossible(ranks, P, mid)) {
            result = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int P, L;
        cin >> P >> L;
        vector<int> ranks(L);
        for (int i = 0; i < L; i++) {
            cin >> ranks[i];
        }
        sort(ranks.begin(), ranks.end());
        cout << minTimeToCook(ranks, P) << endl;
    }
    return 0;
}