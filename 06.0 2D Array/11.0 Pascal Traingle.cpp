#include <iostream>
#include <vector>

using namespace std;

// Function to generate Pascal's Triangle
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> v;
    for (int i = 0; i < numRows; i++) {
        vector<int> a(i + 1);
        v.push_back(a);

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                v[i][j] = 1;
            } else {
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1];
            }
        }
    }
    return v;
}

// Main function
int main() {
    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> pascalTriangle = generate(numRows);

    // Printing Pascal's Triangle
    for (const auto& row : pascalTriangle) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
