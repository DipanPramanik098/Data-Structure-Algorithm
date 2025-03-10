#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void replace(string &s){
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ') s[i]= '@';
    }
}
int main(){
    string s = "I am Dipan Pramanik";
    replace(s);
    for(int i = 0; i <s.length();i++){
        cout<<s[i];
    }
    return 0;
}