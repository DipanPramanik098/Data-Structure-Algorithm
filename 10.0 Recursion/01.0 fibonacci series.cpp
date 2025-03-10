#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// print the nth fibonacci number   
// 0 1 1 2 3 5 8 13 21 ........
int fib(int n){
    // base case
    if(n == 1) return 0;
    if(n == 2) return 1;

    // recursive call
    return fib(n-1)+fib(n-2);
}
    
int main(){
    int n;
    // taking input
    cout<<"Enter value of n : ";
    cin >> n;

    cout<<fib(n)<<endl;
    return 0;
}