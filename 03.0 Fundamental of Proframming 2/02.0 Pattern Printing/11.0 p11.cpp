#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1


    int n;
    cin>>n;

    for(int i=1;i<=n; i++){
        if(i%2==0){
            for(int j=1; j<=i;j++){
                if(j%2==0) cout<<"1";
                else cout<<"0";
            }
            cout<<endl;
        }
        else{
            for(int j=1; j<=i;j++){
                if(j%2==0) cout<<"0";
                else cout<<"1";
            }
            cout<<endl;
        }
    }
    return 0;
}