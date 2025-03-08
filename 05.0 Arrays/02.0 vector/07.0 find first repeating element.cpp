#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int firstrepeat(vector<int>&v){
    unordered_map<int, int> mp;
    // count store
    for(int i=0; i<v.size(); i++){
        mp[v[i]]++;
    }
    for(int i=0; i<v.size(); i++){
        if(mp[v[i]] >= 2) return v[i];
    }
    return -1;
    
}
int main(){
    
    return 0;
}