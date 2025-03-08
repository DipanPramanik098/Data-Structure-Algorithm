#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<" Enter number : ";
    cin>>n;
    int demo = n;
    int rev = 0;
    while(n){
        int lastDigit = n%10;
        rev =  rev*10 + lastDigit;
        n/=10;
    }
    cout<< " = "<<rev;
    return 0;
}