#include <iostream>
#include <vector>

using namespace std;

// Function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& A, const vector<vector<int>>& B) {
    int rowA = A.size();
    int colA = A[0].size();
    int colB = B[0].size();

    // Resultant matrix C initialized with 0
    vector<vector<int>> C(rowA, vector<int>(colB, 0));

    // Matrix multiplication
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colB; j++) {
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

// Function to print a matrix
void printMatrix(vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Define matrices A (2x3) and B (3x2)
    vector<vector<int>> A = {{1, 2, 3}, {4, 5, 6}};
    vector<vector<int>> B = {{7, 8}, {9, 10}, {11, 12}};

    // Multiply matrices
    vector<vector<int>> C = multiplyMatrices(A, B);

    // Display result
    cout << "Resultant Matrix:" << endl;
    printMatrix(C);

    return 0;
}
