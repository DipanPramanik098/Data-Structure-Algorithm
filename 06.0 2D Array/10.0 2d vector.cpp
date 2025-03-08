#include <iostream>
#include <vector>
#include <algorithm> // For reverse

using namespace std;

int main() {
    // Initialization of a 2D vector
    vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Pushing a new row
    vec.push_back({10, 11, 12});

    // Popping the last row
    vec.pop_back();

    // Reversing the entire 2D vector
    reverse(vec.begin(), vec.end());

    // Accessing elements in reverse order using rbegin() and rend()
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        for (int val : *it) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
