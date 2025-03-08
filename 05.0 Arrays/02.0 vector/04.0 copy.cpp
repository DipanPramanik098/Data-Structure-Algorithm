#include <iostream>
#include <vector>
#include <algorithm> // For reverse()

using namespace std;

int main() {
    // Original vector
    vector<int> original = {1, 2, 3, 4, 5};

    // Method 1: Using reverse iterator
    vector<int> reversed1(original.rbegin(), original.rend());

    // Method 2: Using std::reverse function
    vector<int> reversed2 = original;
    reverse(reversed2.begin(), reversed2.end());

    // Display the reversed vectors
    cout << "Original Vector: ";
    for (int num : original) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Reversed Vector (Method 1): ";
    for (int num : reversed1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Reversed Vector (Method 2): ";
    for (int num : reversed2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
