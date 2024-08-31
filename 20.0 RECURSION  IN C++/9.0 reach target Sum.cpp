#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(vector<int>& x, int target){
    // base case
    if(target == 0) return 0;
    if(target < 0) return INT_MAX; 

    // solve 1 case
    int mini = INT_MAX;
    for(int i = 0; i < x.size(); i++){
        int ans = solve(x, target - x[i]);
        if(ans != INT_MAX) {
            mini = min(mini, ans+1);
        }
    }
    return mini;
}
int main(){
    vector<int> v = {1,2};
    int target = 6;

    cout<<solve(v, target);
    return 0;
}