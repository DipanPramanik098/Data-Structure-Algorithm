#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
// leetcode 647
class Solution {
    public:
    int expandIndex( string s, int i , int j){
        int count =0;
        while(i>=0 && j<s.length() && s[i]== s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
        int countSubstrings(string s) {
            int count =0;
            int n = s.length();
            for(int  i=0;i<n;i++){
                int odd= expandIndex(s , i ,i);
                count = count+ odd;
                int even = expandIndex(s , i ,i+1);
                count = count + even;
    
            }
            return count;
        }
    
    };
int main(){
    
    return 0;
}