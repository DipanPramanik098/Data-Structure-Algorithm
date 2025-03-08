#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int a,b,c;
    cout<<"Enter three Numbers : ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<" is greater";
    }else if(b>a && b>c){
        cout<<b<<" is greater";
    }
    else{
        cout<<c<<" is greater";
    }
    return 0;
}