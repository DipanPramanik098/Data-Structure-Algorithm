#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
bool compare(string a, string b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}
int main(){
    string s1 = "Dipan";
    string s2 = "Pramanik";
    string s3 = "Dipan";

    cout<<compare(s1,s2)<<endl;
    cout<<compare(s1,s3)<<endl;
    return 0;
}