#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool found(string &str, char ch, int i, int n){
    if(i>=n) return false;

    if(str[i]==ch) return true;

    return found(str, ch, i+1, n);
}
int main(){
    string str = "Dipan Pramanik";
    char ch = 's';

    int i = 0;
    int n = 14;

    cout<<found(str, ch, i, n);

    return 0;
}