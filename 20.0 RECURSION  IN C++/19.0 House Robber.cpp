#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int robHelper(vector<int> & v, int i){
    if(i>=v.size()) return 0;

    int rob1 = v[i] + robHelper(v,i+2);
    int rob2 = 0 + robHelper(v,i+1);

    return max(rob1, rob2);
}
int main(){
    vector<int>arr  = {2,7,9,3,1};
    cout << robHelper(arr,0);
    return 0;
}