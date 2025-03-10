#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int solve(vector<int>&v, int target){
    // base case
    if(target == 0) return 0;
    if(target< 0) return INT_MAX;

    // solve 1 case
    int mini = INT_MAX;
    for(int i=0; i<v.size(); i++){
        int ans = solve(v, target-v[i]);
        if(ans != INT_MAX) {
            mini = min(ans+1, mini);
        }
    }
    return mini;
}
int main(){
    vector<int>v = {1,2,3};
    cout<<solve(v,5); //5 - target value
    return 0;
}