#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cin>>n;

    int num1 = 1;
    int num2 = 1;
    for(int i = 1; i<=n-2; i++){
        int newnum = num1 + num2;
        num1 = num2;
        num2 = newnum; 
    }
    cout<<num2;
    return 0;
}