#include <bits/stdc++.h>
#include<iostream>
using namespace std;
// TODO: isSafe Optimized O(n)
unordered_map<int, bool>rowcheck;
unordered_map<int, bool>upper_Left;
unordered_map<int, bool>Bottom_Left;


void printsol(vector<vector<char> >&board, int n){
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}


bool isSafe(int row, int col, vector<vector<char> >&board, int n){
    int i = row;
    int j = col;

    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

    // upper left
    i=row;
    j=col;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i--;j--;
    }

    // lower left
    i = row;
    j=col;
    while(i<n && j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        i++; j--;
    }

    return true;
}

// TODO: isSafe Otimized
bool isSafe1(int row, int col, vector<vector<char> >&board, int n){
    if(rowcheck[row] == true) return false;
    if(upper_Left[n-1+col-row] == true) return false;
    if(Bottom_Left[row+col]==true) return false;

    return true;
}


// NOTE: Optimized
void solve1(vector<vector<char> >&board, int col, int n){
    // base 
    if(col >= n) {
        printsol(board,n);
        return;
    }

    // Solve 1 cae
    for(int row =0;row < n; row++){
        if(isSafe1(row, col, board, n)){
            board[row][col] = 'Q';
            rowcheck[row] = true;
            upper_Left[n-1+col-row] = true;
            Bottom_Left[row+col] = true;
            // recursion
            solve1(board, col +1, n);
            // backtracking
            board[row][col] = '-';
            rowcheck[row] = false;
            upper_Left[n-1+col-row] = false;
            Bottom_Left[row+col] = false;
        }
    }


}
// BUG: Normal 

void solve(vector<vector<char> >&board, int col, int n){
    // base 
    if(col >= n) {
        printsol(board,n);
        return;
    }

    // Solve 1 cae
    for(int row =0;row < n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col] = 'Q';
            // recursion
            solve(board, col +1, n);
            // backtracking
            board[row][col] = '-';
        }
    }


}
int main(){
    int n;
    cout<<"Enter the no of Queens: ";
    cin>>n;

    vector<vector<char> >board(n,vector<char>(n,'-'));
    int col = 0;
    //TODO: solve(board,col,n);
    solve1(board,col,n);

    
    return 0;
}