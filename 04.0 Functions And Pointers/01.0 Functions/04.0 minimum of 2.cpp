#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    int minimum(int a, int b){
        if(a<b) return a;
        return b;
    }
int main(){
    int a,b;
    cin>>a>>b;

    cout<<"minimum of "<<a<<" and "<<b<<" is  = "<<minimum(a,b)<<endl;
    return 0;
}