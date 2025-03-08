#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
bool cp(string &s){
    int i=0,j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]) return false;
        i++;j--;
    }
    return true;
}
int main(){
    string s1 = "racecar";
    string s2 = "Dipan";
    string s3 = "qweewq";
    string s4 = "qweew1";

    cout<<cp(s1)<<endl;
    cout<<cp(s2)<<endl;
    cout<<cp(s3)<<endl;
    cout<<cp(s4)<<endl;
    return 0;
}