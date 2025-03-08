#include <iostream>
#include <vector>
#include <cctype> // For tolower()
using namespace std;

// Function to check if a string is a pangram (contains all letters a-z)
bool isPangram(const string &s) {
    vector<bool> present(26, false);
    int count = 0;

    for (char ch : s) {
        if (isalpha(ch)) { // Only consider alphabetic characters
            char lowerChar = tolower(ch);
            int index = lowerChar - 'a';
            if (!present[index]) {
                present[index] = true;
                count++;
            }
        }
    }
    return count == 26; // True if all letters are present
}

int main() {
    string demo = "The quick brown fox jumps over the lazy dog";
    cout << (isPangram(demo) ? "True" : "False") << endl;
    return 0;
}
