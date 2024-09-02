#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// TODO: Leetcode 22 -> Generate Parenthesis code


void solve(int n, vector<string> &ans, int open_bracket, int close_bracket, string output)
{
    // base case
    if (open_bracket == 0 && close_bracket == 0)
    {
        ans.push_back(output);
        return;
    }

    // include open - bracket
    if (open_bracket != 0)
    {
        output.push_back('(');
        solve(n, ans, open_bracket - 1, close_bracket, output);
        output.pop_back();
    }
    // include close - bracket
    if (close_bracket > open_bracket)
    {
        output.push_back(')');
        solve(n, ans, open_bracket, close_bracket - 1, output);
        output.pop_back();
    }
}
// vector<string> generateParenthesis(int n)
// {
//     vector<string> ans;
//     int open_bracket = n;
//     int close_bracket = n;
//     string output = "";
//     solve(n, ans, open_bracket, close_bracket, output);
//     return ans;
// }

int main()
{   
    int n;
    cin>>n;

    vector<string> ans;
    int open_bracket = n;
    int close_bracket = n;
    string output = "";
    solve(n, ans, open_bracket, close_bracket, output);
    cout<<"{ ";
    for(auto i : ans) {
        cout<<i<<" , ";
    }
    cout<<" }";
    cout<<endl;

    return 0;
}