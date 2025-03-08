#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    // A B C D
    // A B C D
    // A B C D

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(j + 64)<<" ";
        }
        cout<<endl;
    }
    return 0;
}