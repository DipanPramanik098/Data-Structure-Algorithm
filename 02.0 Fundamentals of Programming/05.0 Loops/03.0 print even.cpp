#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<"Enter Last Number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    return 0;
}