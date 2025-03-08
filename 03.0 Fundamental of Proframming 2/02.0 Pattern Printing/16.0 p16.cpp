#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    //   1
    //  121
    // 12321
    //1234321
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        // num
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        // right part num
        for(int k=i-1; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
    return 0;

}