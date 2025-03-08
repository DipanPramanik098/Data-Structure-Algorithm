#include <iostream>
using namespace std;

// Function to demonstrate pointer to a function
void hello() {
    cout << "Hello from function pointer!" << endl;
}

int main() {
    // 1. Null Pointer
    int* ptr1 = nullptr;
    cout << "Null Pointer: " << ptr1 << endl;
    
    // 2. Wild Pointer (Uninitialized Pointer, use with caution)
    int* ptr2;
    // cout << "Wild Pointer: " << ptr2 << endl; // Can cause undefined behavior

    // 3. Dangling Pointer
    int* ptr3 = new int(10);
    delete ptr3; // ptr3 is now dangling
    // cout << *ptr3 << endl; // Undefined behavior

    // 4. Void Pointer
    void* ptr4;
    int a = 5;
    ptr4 = &a;
    cout << "Void Pointer: " << *(static_cast<int*>(ptr4)) << endl;

    // 5. Constant Pointer (pointer address cannot be changed)
    int b = 20;
    int* const ptr5 = &b;
    *ptr5 = 25; // Allowed
    // ptr5 = &a; // Not allowed
    cout << "Constant Pointer: " << *ptr5 << endl;
    
    // 6. Pointer to Constant (pointed value cannot be modified)
    const int c = 30;
    const int* ptr6 = &c;
    // *ptr6 = 35; // Not allowed
    cout << "Pointer to Constant: " << *ptr6 << endl;
    
    // 7. Constant Pointer to Constant
    const int d = 40;
    const int* const ptr7 = &d;
    // *ptr7 = 45; // Not allowed
    // ptr7 = &c; // Not allowed
    cout << "Constant Pointer to Constant: " << *ptr7 << endl;
    
    // 8. Pointer to Pointer
    int e = 50;
    int* ptr8 = &e;
    int** ptr9 = &ptr8;
    cout << "Pointer to Pointer: " << **ptr9 << endl;
    
    // 9. Array of Pointers
    int f = 60, g = 70;
    int* arr[2] = {&f, &g};
    cout << "Array of Pointers: " << *arr[0] << " " << *arr[1] << endl;
    
    // 10. Pointer to Function
    void (*ptr10)() = hello;
    ptr10();
    
    return 0;
}
