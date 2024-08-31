#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(string &s, int start, int end){
    if(start >= end) return;
    swap(s[start], s[end]);

    solve(s,start+1, end-1);

}
int main(){
    string s;
    cin >> s;
    solve(s, 0,s.size()-1);

    cout << s << endl;
    return 0;
}