#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void max_sum(vector<int> &v, int i, int &maxi, int sum){
    // base case 
    if(i>=v.size()){
        maxi = max(maxi, sum);
        return;
    }

    // include 0th index element and index+2 
    max_sum(v,i+2,maxi,sum+v[i]);
    // exclude ans index+1;
    max_sum(v,i+1,maxi,sum);
}
int main(){
    vector<int>a = {2,1,4,9};
    int i=0, maxi = INT_MIN;
    int sum =0;
    max_sum(a, i, maxi, sum);
    cout<<maxi;
    return 0;
}