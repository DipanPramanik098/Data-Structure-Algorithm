#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// Function to rotate a square matrix 90 degrees clockwise
void rotateMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    // First, transpose the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // Then, reverse each row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

// Function to print the matrix
void printMatrix(vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    
    rotateMatrix(matrix);
    
    cout << "Rotated Matrix (90 degrees clockwise):" << endl;
    printMatrix(matrix);
    
    return 0;
}
