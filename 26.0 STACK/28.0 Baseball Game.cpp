#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "D" && !st.empty()) {
                int top_ele = st.top();
                st.push(top_ele * 2);
            } else if (operations[i] == "C" && !st.empty()) {
                st.pop();
            } else if (operations[i] == "+") {
                int top = st.top();
                st.pop();
                int new_top = st.top();
                st.push(top);  // Push back the top element
                st.push(top + new_top);  // Push the sum of the last two elements
            } else {
                st.push(stoi(operations[i]));
            }
        }
        
        int sum = 0;
        while (!st.empty()) {
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};

int main(){
    
    return 0;
}