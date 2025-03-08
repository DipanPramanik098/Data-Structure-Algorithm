#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    // 1234567
    // 123 567
    // 12   67
    // 1     7

    int n; 
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<i;
    cout<<endl;
    int m=n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        int a = 1;
        for(int j=1;j<=m-i+1;j++) {
            cout<<j;
            a++;
        }
        for(int k=1; k<=nsp; k++) {
            cout<<" ";
            a++;
        }
        nsp+=2;
        for(int j=1; j<=m-i+1; j++) {
            cout<<a;
            a++;
        }
        cout<<endl;
    }
    return 0;
}