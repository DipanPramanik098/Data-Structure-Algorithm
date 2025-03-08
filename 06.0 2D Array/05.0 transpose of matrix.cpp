#include <iostream>
#include <vector>
using namespace std;

// Function to compute the transpose of a square matrix in place
void transposeMatrix(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}
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
    
    transposeMatrix(matrix);
    
    cout << "Transposed Matrix:" << endl;
    printMatrix(matrix);
    
    return 0;
}
