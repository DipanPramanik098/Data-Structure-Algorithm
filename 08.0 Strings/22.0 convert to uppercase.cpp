#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void convert(string &s){
    for(int i=0; i<s.length();i++){
        if(s[i]>=97 && s[i]<= 122){
            s[i] = s[i] - 'a' + 'A';
        }
    }
}
int main(){
    string s = "I am Dipan Pramanik";
    convert(s);
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    return 0;
}