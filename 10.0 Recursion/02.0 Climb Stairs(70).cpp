#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// leetcode 70
int climbStairs(int n) {
    // base case  
    if(n<=1) return 1;
    
    // recursive call
    return climbStairs(n-1) + climbStairs(n-2);
}
int main(){
    
    return 0;
}