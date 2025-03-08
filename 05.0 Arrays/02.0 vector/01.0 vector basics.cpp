#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Vector Demonstration
    vector<int> vec;  // Empty vector
    vector<int> vec2(5, 10); // Vector with 5 elements, all initialized to 10

    // Adding elements
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout << "Vector elements: ";
    for(int val : vec) cout << val << " ";
    cout << endl;

    // Accessing elements
    cout << "First Element: " << vec.front() << endl;
    cout << "Last Element: " << vec.back() << endl;
    cout << "Element at index 1: " << vec.at(1) << endl;

    // Removing elements
    vec.pop_back();
    cout << "After pop_back, size: " << vec.size() << endl;

    // Inserting and erasing elements
    vec.insert(vec.begin() + 1, 5);
    vec.erase(vec.begin());
    cout << "After insertion and erasure: ";
    for(int val : vec) cout << val << " ";
    cout << endl;

    // Clearing and checking empty
    vec.clear();
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;
    
    return 0;
}
