#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row = matrix.size();
    int col = matrix[0].size();

    int rowidx = 0;
    int colidx = col-1;
    while(rowidx < row && colidx >=0){
        int element = matrix[rowidx][colidx];
        if(element == target) return 1;
        else if (element< target) rowidx++;
        else colidx--;
    }
    return 0;
}
int main(){
    int rows, cols, target;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    cout << "Enter the sorted matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target element to search: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Element found in the matrix.\n";
    } else {
        cout << "Element not found in the matrix.\n";
    }

    return 0;
}