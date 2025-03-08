#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int longestPrefixSuffix(string &s) {
    vector<int>lps(s.size(),0);
    int prefix = 0;
    int suffix = 1;
    while(suffix<s.size()) {
        if(s[prefix] == s[suffix]) {
            lps[suffix] = prefix+1;
            suffix++;
            prefix++;
        }else{
            if(prefix == 0){
                lps[suffix] = 0;
                suffix++;  
            }else{
                prefix = lps[prefix-1];
            }
        }
    }
    return lps[s.size()-1];
}
int main(){
    
    return 0;
}