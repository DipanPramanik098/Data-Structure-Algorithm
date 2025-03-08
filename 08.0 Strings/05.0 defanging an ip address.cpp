#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
string change(string &s){
    string ans="";
    for(int i=0; i<s.length();i++){
        if(s[i] == '.'){
            ans+="[.]";
        }
        else ans+=s[i];
    }
    return ans;
}
int main(){
    string input = "1.0.0.0.1";
    cout<<input<<endl;
    
    string ans = change(input);
    cout<<ans<<endl;
    return 0;
}