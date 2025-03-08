#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int matrixScore(vector<vector<int>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();

    // 1.0  making the first column all ones
    for(int i=0;i<rows; i++){
        if(grid[i][0] == 0){
            // flip
            for(int j=0; j<cols; j++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    //  2.0 flip the columns where number of zeros > number of ones.
    for(int j=0; j<cols; j++){
        int zero = 0;
        int one = 0;
        for(int i=0; i<rows; i++){
            if(grid[i][j] == 0) zero++;
            else one++;
        }
        if(zero>one) {
            for(int i=0; i<rows; i++){
                if(grid[i][j] == 0) grid[i][j] = 1;
                else grid[i][j] = 0;
            }
        }
    }
    // calculate binary to decimal 
    int sum = 0;
    for(int i=0; i<rows; i++){
        int x = 1;
        for(int j=cols-1; j>=0; j--){
            sum += grid[i][j]*x;
            x*=2; 
        }
    }
    return sum;
}
int main(){
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<int>> grid(rows, vector<int>(cols));

    cout << "Enter the matrix (0s and 1s only):\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    int result = matrixScore(grid);
    cout << "Maximum possible score: " << result << endl;

    return 0;
}