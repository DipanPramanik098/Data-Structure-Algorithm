#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print(string str, int i, string op, vector<string>&ans){
    // base case
    if(i >= str.length()){
        ans.push_back(op);
        return;
    }

    // include
    op.push_back(str[i]);
    print(str, i+1, op,ans);
    op.pop_back();

    // exclude
    print(str, i+1, op,ans);
}
int main(){
    string str = "abc";

    int i = 0;
    string op = " ";
    vector<string> ans;

    print(str, i, op,ans);
    for(auto s : ans){
        cout<<s<<endl;
    }
    return 0;
}