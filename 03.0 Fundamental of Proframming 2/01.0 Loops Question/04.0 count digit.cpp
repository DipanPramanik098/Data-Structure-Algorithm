#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<" Enter number : ";
    cin>>n;
    int count = 0;
    int demo = n;
    while(n){
        count++;
        n/=10;
    }
    if(demo == 0) cout<<"Digit in "<<demo<<" = "<<1<<endl;
    else cout<<"Digit in "<<demo<<" = "<<count<<endl;
    return 0;
}