#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    //*******
    //*** ***  
    //**   **  
    //*     *  
    int n;
    cin>>n;
    for(int i=1;i<=2*n-1;i++) cout<<"*";
    cout<<endl;
    int m=n-1;
    int nsp = 1;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i+1;j++) cout<<"*";
        for(int k=1; k<=nsp; k++) cout<<" ";
        nsp+=2;
        for(int j=1; j<=m-i+1; j++) cout<<"*";
        cout<<endl;
    }
    
    return 0;
}