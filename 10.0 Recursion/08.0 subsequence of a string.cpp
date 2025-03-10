#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// Note: include exclude technique is used
void subsequence(string&s, int i, string output, vector<string>&ans){
    // base case
    if(i>= s.size()){
        ans.push_back(output);
        return;
    }
    // include
    output.push_back(s[i]);
    subsequence(s, i+1, output,ans);
    output.pop_back();

    // exclude
    subsequence(s, i+1, output,ans);
}
int main(){
    string s = "abcd";
    string output = " ";
    vector<string>ans;

    // function call -> 0 indicate the start index
    subsequence(s, 0 , output, ans);

    // print all subsequence
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}