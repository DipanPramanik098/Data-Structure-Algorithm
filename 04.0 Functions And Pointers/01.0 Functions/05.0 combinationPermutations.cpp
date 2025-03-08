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
    int n,r;
    cin>>n>>r;

    cout<<"nCr : "<<nCr(n,r)<<endl;
    return 0;
}