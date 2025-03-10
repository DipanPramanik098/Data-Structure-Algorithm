#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
void print_digit(int n){
    // base case 
    if(n==0) return;

    // process - find the last digit
    int ld = n%10;
    // recursion call
    print_digit(n/10);
    cout<<ld<<" ";
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin >> n;

    // function call
    print_digit(n);
    return 0;
}