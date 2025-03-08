#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<"Which number table you want to print : ";
    cin>>n;
    for(int i=1;i<=10;i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}