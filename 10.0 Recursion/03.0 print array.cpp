#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

// printing array using recursion
void print(vector<int>&arr, int n){
    // base case
    if(n == 0) return;
    // recursive call
    print(arr,n-1);
    // process
    cout<<arr[n]<<" ";
}
int main(){
    vector<int>array = {0,1,2,3,4,5,6,7};
    int n = array.size();
    print(array,n-1);
    return 0;
}