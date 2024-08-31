#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int climb(int n){
    if(n<=1) return 1;

    return climb(n-1)+climb(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<climb(n)<<endl;
    return 0;
}