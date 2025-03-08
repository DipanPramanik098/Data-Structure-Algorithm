#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int>& vec) {
    int left = 0, right = vec.size() - 1;

    while (left < right) {
        swap(vec[left], vec[right]); // Swap elements
        left++;
        right--;
    }
}

void printArr(vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {10, 20, 30, 40, 50};

    cout << "Original Vector: ";
    printArr(vec);

    reverseArr(vec);

    cout << "Reversed Vector: ";
    printArr(vec);

    return 0;
}
