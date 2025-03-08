#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void sort(string &s){
    vector<int>count(26,0);
    for(int i=0; i<s.size(); i++){
        count[s[i]-'a'] ++;
    }
    s = "";
    for(int i=0; i<26; i++){
        char ch  = i+'a';
        while(count[i]){
            s+=ch;
            count[i]--;
        }
    }
}
int main(){
    string s = "dipanpramanik";

    sort(s);
    cout<<s;
    return 0;
}