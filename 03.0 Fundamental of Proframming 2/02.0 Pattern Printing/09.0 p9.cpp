#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    // *___*
    // _*_*_
    // __*__
    // _*_*_
    // *___*
    // diagonal only
    int n; cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n;j++){
            if(i==j  || i+j == n+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}