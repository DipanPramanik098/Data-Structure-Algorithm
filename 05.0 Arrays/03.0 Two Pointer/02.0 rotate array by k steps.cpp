#include <iostream>
#include <vector>
#include <algorithm> // For reverse()
using namespace std;

// Function to rotate vector by k steps
void rotateArr(vector<int>& vec, int k) {
    int n = vec.size();
    k = k % n; // Handle cases where k > n

    // Step 1: Reverse the entire vector
    reverse(vec.begin(), vec.end());

    // Step 2: Reverse first k elements
    reverse(vec.begin(), vec.begin() + k);

    // Step 3: Reverse the remaining n-k elements
    reverse(vec.begin() + k, vec.end());
}

// Function to print the vector
void printArr(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original Vector: ";
    printArr(vec);

    rotateArr(vec, k);

    cout << "Rotated Vector by " << k << " steps: ";
    printArr(vec);

    return 0;
}
