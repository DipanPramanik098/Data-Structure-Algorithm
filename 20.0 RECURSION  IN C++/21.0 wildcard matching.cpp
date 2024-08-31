#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool isMatchHelper(string &s, int si, string &p, int pi){
    if(si == s.size() && pi == p.size()) return true;

    if(si==s.size() && pi <p.size()){
        while(pi<p.size()){
            if(p[pi] != '*') return false;
            pi++;
        }
        return true;
    }
    // single char match
    if(s[si] == p[pi]){
        return isMatchHelper(s, si+1, p, pi+1);
    }

    // tricky case
    if(p[pi] == '*'){
        // treat '*' as null
        bool caseA = isMatchHelper(s, si, p, pi+1);
        // treat * as 1 char
        bool caseB = isMatchHelper(s, si+1, p, pi);

        return caseA || caseB;
    }

    return false;
}
int main(){
    string s;
    string p;
    cin>>s>>p;
    // si -> pointer index for string s
    // pi -> pointer index for string p
    int si=0,pi=0;

    cout<<isMatchHelper(s,si,p,pi)<<endl;
    return 0;
}