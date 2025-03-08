#include <iostream>
#include <vector>
using namespace std;

void add(vector<vector<int>>& a, vector<vector<int>>& b) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            a[i][j] += b[i][j];
        }
    }
} 

void print(vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[0].size(); j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    vector<vector<int>> b = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
    
    cout << "First Matrix" << endl;
    print(a);
    
    cout << "Second Matrix" << endl;
    print(b);

    // function to add
    add(a, b);

    cout << "After Adding: " << endl;
    print(a);
    
    return 0;
}
