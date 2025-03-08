#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int factfun(int n){
    int fact = 1;
    for(int i=2;i<=n; i++){
        fact*=i;
    }
    return fact;
}
int nCr(int n, int r){
    return factfun(n)/(factfun(r) * factfun(n-r));
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i;j++){
            cout<<nCr(i,j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}