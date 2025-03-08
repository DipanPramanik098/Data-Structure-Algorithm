#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n; cin>>n;
    int temp = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<temp;
            temp++;
        }
        cout<<endl;
    }
    return 0;
}