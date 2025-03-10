#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
bool find(string&s,int n, char ch){
    // base case - if index is less than zero
    if(n < 0 ) return false;
    // process - if character is matched
    if(s[n] == ch) return true;
    // recursive call - check for lower index
    return find(s,n-1,ch);
}
int main(){
    string str = "Dipan Pramanik";
    char ch = 'a';
    int n = str.size();

    cout<<find(str,n-1,ch)<<endl;
    return 0;
}