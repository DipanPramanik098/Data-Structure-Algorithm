#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int fib(int n){
    // base case
    if(n==1) return 0;
    if(n==2) return 1;

    // recursive call
    return fib(n-1) + fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;

    cout<<fib(n);
    return 0;
}