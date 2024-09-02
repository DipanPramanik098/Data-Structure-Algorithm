#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// TODO: Letter Combination of phone numbers
void solve(string digits, vector<string> &ans, int index, vector<string> &map, string output)
{
    if (index >= digits.length())
    {
        ans.push_back(output);
        return;
    }
    // solve 1 case
    int digit = digits[index] - '0';
    string value = map[digit];
    for (int i = 0; i < value.length(); i++)
    {
        char ch = value[i];
        output.push_back(ch);
        solve(digits, ans, index + 1, map, output);
        output.pop_back();
    }
}

// vector<string> letterCombinations(string digits)
// {
//     vector<string> ans;
//     int index = 0;
//     vector<string> map(10);
//     if (digits.length() == 0)
//         return ans;
//     map[2] = "abc";
//     map[3] = "def";
//     map[4] = "ghi";
//     map[5] = "jkl";
//     map[6] = "mno";
//     map[7] = "pqrs";
//     map[8] = "tuv";
//     map[9] = "wxyz";

//     string output;

//     solve(digits, ans, index, map, output);

//     return ans;
// }
int main()
{   string digits;
    cin>>digits;
    vector<string> ans;
    int index = 0;
    vector<string> map(10);
    if (digits.length() == 0) {
        cout<<-1;
        return 0;
    }
        // return ans;
    map[2] = "abc";
    map[3] = "def";
    map[4] = "ghi";
    map[5] = "jkl";
    map[6] = "mno";
    map[7] = "pqrs";
    map[8] = "tuv";
    map[9] = "wxyz";

    string output;

    solve(digits, ans, index, map, output);

    for(auto i: ans) {
        cout<<i<<" , ";
    }
    return 0;
}