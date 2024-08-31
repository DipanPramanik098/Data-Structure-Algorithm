#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(string &s, int i, int j){
    if(i>=j) return true;

    // solve 1  case
    if(s[i]!=s[j]) return false;

    check(s,i+1,j-1);
}
int main(){
    string s;
    cin>>s;
    cout<<check(s,0,s.size()-1);
    return 0;
}