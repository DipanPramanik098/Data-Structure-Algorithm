#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void solve(string &s, char x, int &ans, int i){
    // base case
    if(i<0) return;
    // solve one case
    if(s[i] == x){
        ans = i;
        return;
    }

    // call recursion
    solve(s, x, ans, i-1);

}
int main(){
    string s;
    cin>>s;
    char x;
    cin>>x;
    int ans = -1;
    int i = s.size()-1;

    solve(s,x,ans,i);
    cout<<ans<<endl;
    return 0;
}