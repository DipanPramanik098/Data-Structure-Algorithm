#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int ld(vector<int>&v, int x){
    for(int i=v.size()-1; i>=0; i--){
        if(v[i] == x) return i;
    }
    return -1;
}
    
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(2);
    v.push_back(12);
    v.push_back(12);
    v.push_back(2);
    v.push_back(6);
    v.push_back(63);

    int x = 2;

    cout<<"last Index : "<<ld(v,x);
    return 0;
}