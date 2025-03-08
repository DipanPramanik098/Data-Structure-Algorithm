#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

// Function to find the largest element in a 2D array
int findLargest(int arr[ROWS][COLS]) {
    int maxElement = arr[0][0];
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] > maxElement) {
                maxElement = arr[i][j];
            }
        }
    }
    return maxElement;
}

int main() {
    int arr[ROWS][COLS];
    
    cout << "Enter elements for the array (" << ROWS << "x" << COLS << "):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }
    
    int largest = findLargest(arr);
    cout << "The largest element in the array is: " << largest << endl;
    
    return 0;
}
