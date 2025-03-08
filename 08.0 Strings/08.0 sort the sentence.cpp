#include <iostream>
#include <vector>
using namespace std;

// Function to sort words based on the number at the end of each word
string sorts(string &s) {
    vector<string> ans(10); // Store words in correct positions
    string temp = "";
    int count = 0, index = 0;

    while (index < s.length()) {
        if (s[index] == ' ') { // Found a space, process the word
            int pos = temp[temp.size() - 1] - '0'; // Extract position
            temp.pop_back(); // Remove the number
            ans[pos] = temp;
            temp.clear();
            count++;
        } else {
            temp += s[index];
        }
        index++;
    }

    // Process the last word (since no space follows it)
    if (!temp.empty()) {
        int pos = temp[temp.size() - 1] - '0';
        temp.pop_back();
        ans[pos] = temp;
        count++;
    }

    // Construct the sorted sentence
    string result = "";
    for (int i = 1; i <= count; i++) {
        result += ans[i] + " ";
    }
    result.pop_back(); // Remove trailing space

    return result;
}

int main() {
    string s = "is2 sentence4 This1 a3";
    cout << "Original: " << s << endl;
    string ans = sorts(s);
    cout << "Sorted: " << ans << endl;
    return 0;
}
