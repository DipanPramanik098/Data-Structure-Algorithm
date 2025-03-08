#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int solve(string &s){
    int first=0;
    int second = 0;
    int len =0;
    vector<int>count(256,0);
    while(second<s.size()){
        while(count[s[second]]){
            count[s[first]] = 0;
            first++;
        }
        count[s[second]] = 1;
        len = max(len , second-first + 1);
        second++;

    }
    return len;
}
int main(){
    string s = "abcabcbb";
    string s1 = "bbbbb";
    cout<<solve(s)<<endl;
    cout<<solve(s1)<<endl;
    return 0;
}