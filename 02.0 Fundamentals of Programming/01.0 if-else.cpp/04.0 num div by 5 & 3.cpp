#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%3 == 0 && n%5==0){
        cout<<"div by 5 & 3";
    }else{
        cout<<"not! div by 5 & 3";
    }
    return 0;
}