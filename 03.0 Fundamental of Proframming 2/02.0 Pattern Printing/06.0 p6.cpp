#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n; 
    cin >> n;

    for(int i=1; i<n; i++){
        for(int j = 1; j<=2*i-1; j+=2){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}