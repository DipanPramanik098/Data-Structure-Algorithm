#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        string add(string n1, string n2){
            int i = n1.size()-1;
            int j = n2.size()-1;
            int sum, carry = 0;
            string ans;
    
            // j>=0
            while(j>=0){
                sum = (n1[i]-'0')+(n2[j]-'0')+carry;
                carry = sum/10;
                char ch = '0'+sum%10;
                ans += ch;
                j--;i--;
            }
    
            // i>=0
            while(i>=0){
                sum = (n1[i]-'0')+carry;
                carry = sum/10;
                char ch = sum%10 +'0';
                ans += ch;
                i--; 
            }
            //carry 
            if(carry) ans+='1';
    
            reverse(ans.begin(),ans.end());
    
            return ans;
        }
        string addStrings(string num1, string num2) {
            if(num1.size()<num2.size()) return add(num2,num1);
            else return add(num1,num2);
        }
    };
int main(){
    
    return 0;
}