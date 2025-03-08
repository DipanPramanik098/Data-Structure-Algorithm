#include <iostream>
#include <vector>

using namespace std;

// Function to print matrix in wave form
void wavePrint(const vector<vector<int>>& matrix) {
    if (matrix.empty()) return;

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int col = 0; col < cols; col++) {
        // If column index is even, traverse top to bottom
        if (col % 2 == 0) {
            for (int row = 0; row < rows; row++) {
                cout << matrix[row][col] << " ";
            }
        }
        // If column index is odd, traverse bottom to top
        else {
            for (int row = rows - 1; row >= 0; row--) {
                cout << matrix[row][col] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    vector<vector<int>> matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12}
    };

    cout << "Wave Print of Matrix: ";
    wavePrint(matrix);

    return 0;
}
