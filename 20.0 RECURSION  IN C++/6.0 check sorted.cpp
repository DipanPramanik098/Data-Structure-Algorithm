#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool check(int arr[], int n, int i){
    // bc
    if(i == n-1) return true;

    if(arr[i+1] < arr[i]) return false;

    return check(arr, n, i+1);
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,0};
    int arr2[] = {4,3,1,2,4,4};
    int i = 0;
    int n1 = 8, n2 = 7;
    cout<<check(arr,n1,i)<<endl;
    cout<<check(arr2,n2,i)<<endl;
    return 0;
}