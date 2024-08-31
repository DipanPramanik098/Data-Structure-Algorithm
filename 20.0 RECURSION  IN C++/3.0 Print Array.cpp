#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print(int arr[], int n, int i){
    if(i>=n) return;

    cout<<arr[i]<<" ";

    print(arr, n , i+1);
}
int main(){
    int arr[7] = {0,1,2,3,4,5,6};
    int n = 7;
    int i=0;
    print(arr,n,i);
    return 0;
}