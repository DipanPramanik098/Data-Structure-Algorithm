#include <iostream>
using namespace std;

#define ROWS 3
#define COLS 3

// Function to initialize the array with default values
void initializeArray(int arr[ROWS][COLS], int value) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[i][j] = value;
        }
    }
}

// Function to take user input
void inputArray(int arr[ROWS][COLS]) {
    cout << "Enter elements for the array (" << ROWS << "x" << COLS << "):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }
}

// Function to display the array
void displayArray(int arr[ROWS][COLS]) {
    cout << "Array elements:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to update a specific element
void updateElement(int arr[ROWS][COLS], int row, int col, int value) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        arr[row][col] = value;
    } else {
        cout << "Invalid position!" << endl;
    }
}

// Function to search for an element
bool searchElement(int arr[ROWS][COLS], int key) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

// Function to sum all elements
int sumElements(int arr[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[ROWS][COLS];
    initializeArray(arr, 0); // Initializing with 0
    inputArray(arr);
    displayArray(arr);
    
    int row, col, value;
    cout << "Enter row, col, and value to update: ";
    cin >> row >> col >> value;
    updateElement(arr, row, col, value);
    displayArray(arr);
    
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    if (searchElement(arr, key)) {
        cout << "Element found!\n";
    } else {
        cout << "Element not found!\n";
    }
    
    cout << "Sum of all elements: " << sumElements(arr) << endl;
    
    return 0;
}
