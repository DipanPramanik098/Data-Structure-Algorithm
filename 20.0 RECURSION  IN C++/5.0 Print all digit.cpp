#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print(int n){
    if(n==0) return;

    int newnum = n/10;
    print(newnum);

    cout<<n%10 << " ";
}
int main(){
    int n;
    cin>>n;

    print(n);
    return 0;
}