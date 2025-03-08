#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<"Enter nth Term : ";
    cin>>n;
    // for(int i=1; i<=(2*n - 1); i+=2){
    //     cout<<i<<" ";
    // }

    int a  = 1;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a+=2;
    }
    return 0;
}