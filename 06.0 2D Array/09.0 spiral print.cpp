#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();
    
    int count = 0;
    int total = row*col;
    
    //index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row-1;
    int endingCol = col-1;
    
    
    while(count < total) {
        
        //print starting row
        for(int index = startingCol; count < total && index<=endingCol; index++) {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        
        //print ending column
        for(int index = startingRow; count < total && index<=endingRow; index++) {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        
        //print ending row
        for(int index = endingCol; count < total && index>=startingCol; index--) {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        
        //print starting column
        for(int index = endingRow; count < total && index>=startingRow; index--) {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    } 
    return ans;
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
        vector<vector<int>> matrix = {
            {1,  2,  3,  4},
            {5,  6,  7,  8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };
    
        vector<int>ans = spiralOrder(matrix);

        printMatrix(matrix);
        
        // 
        cout<<"Spiral form : ";
        for(int i=0; i<ans.size(); i++) cout<<ans[i]<<" ";
        return 0;
    return 0;
}