#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// 1910
class Solution {
    public:
    void remove(string&s, string&part){
        int found = s.find(part);
        if(found != string::npos){
            // base case
            string left_part = s.substr(0,found);
            string right_part = s.substr(found + part.size(),s.size());
    
            s= left_part + right_part;
        }
        else{
            return;
        }
    
        remove(s,part);
    }
        string removeOccurrences(string s, string part) {
            remove(s,part);
            return s;
        }
    };
int main(){
    
    return 0;
}