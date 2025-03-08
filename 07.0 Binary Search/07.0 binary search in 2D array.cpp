#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

bool binarySearch2D(const vector<vector<int>>& matrix, int target) {
    if (matrix.empty() || matrix[0].empty())
        return false;

    int m = matrix.size();
    int n = matrix[0].size();
    int low = 0, high = m * n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        // Map the 1D index back to 2D indices
        int i = mid / n;
        int j = mid % n;

        if (matrix[i][j] == target) {
            return true;
        } else if (matrix[i][j] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int m, n, target;
    cout << "Enter number of rows: ";
    cin >> m;
    cout << "Enter number of columns: ";
    cin >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix (sorted row-wise and overall):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "Enter the target value: ";
    cin >> target;
    
    if (binarySearch2D(matrix, target)) {
        cout << "Target " << target << " found in the matrix." << endl;
    } else {
        cout << "Target " << target << " not found in the matrix." << endl;
    }
    
    return 0;
}
