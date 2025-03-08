#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<" Enter number : ";
    cin>>n;
    int demo = n;
    int sum  = 0;
    while(n){
        int lastDigit = n%10;
        sum += lastDigit;
        n/=10;
    }
    cout<< "Sum : "<<sum;
    return 0;
}