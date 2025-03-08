#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
vector<int> common(vector<int> a, vector<int> b, vector<int> c) {
    set<int> st;
    vector<int> ans;
    int i = 0, j = 0, k = 0;

    while (i < a.size() && j < b.size() && k < c.size()) {
        if (a[i] == b[j] && b[j] == c[k]) {  // Fixed comparison
            st.insert(a[i]);
            i++; j++; k++;
        }
        else if (a[i] < b[j]) i++;  // Fixed index issue
        else if (b[j] < c[k]) j++;
        else k++;
    }

    for (auto x : st) {
        ans.push_back(x);
    }
    return ans;
}

int main() {
    vector<int> a{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> b{2, 4, 6, 8};
    vector<int> c{2, 3, 4, 7, 8, 9};

    vector<int> ans = common(a, b, c);

    for (auto x : ans) {
        cout << x << " ";
    }
    return 0;
}
