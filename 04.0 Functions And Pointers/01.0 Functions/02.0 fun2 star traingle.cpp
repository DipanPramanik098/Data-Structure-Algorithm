#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void starPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;

    starPattern(n);
    return 0;
}