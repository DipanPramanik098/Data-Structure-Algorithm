#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
public:
    string reverseStr(string s, int k) {
        int i =0;
        while(i<s.size()){
            int j = i+k -1;
            int x = j;
            if(j >= s.length()) j = s.length()-1;
            while(i<=j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i = x+k+1;
        }
        return s;
    }
};
int main(){
    
    return 0;
}