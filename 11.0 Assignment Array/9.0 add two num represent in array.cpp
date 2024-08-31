#include <bits/stdc++.h>
#include<iostream>
using namespace std;
string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int i = n-1;
    int j = m-1;
    int carry = 0;
    string ans;
    while(i>=0 && j>=0){
        int x = a[i]+b[j]+carry;
        ans.push_back(x%10 + '0');
        carry = x/10;
        i--;j--;
    }
    while(i>=0){
       int x = a[i]+0+carry;
        ans.push_back(x%10 + '0');
        carry = x/10;
        i--;
    }
    while(j>=0){
        int x = 0+b[j]+carry;
        ans.push_back(x%10 + '0');
        carry = x/10;
        j--;
    }
    
    if(carry){
        ans.push_back(carry+'0');
    }
    while(ans[ans.size()-1] == '0'){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    
    }    
int main(){
    
    return 0;
}