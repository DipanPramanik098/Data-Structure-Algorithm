#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int bs(int arr[], int n, int k){
    int start = 0, end =n-1;
    while(start <= end){
        int mid = start +(end-start)/2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] >k) end = mid-1;
        else start = mid+1;
    }
    return -1;
}
int main(){
    int arr[5] = {2,4,6,8,10};
    int k = 5;
    cout<<bs(arr,5,k)<<endl;
    k = 6;
    cout<<bs(arr,5,k)<<endl;
    return 0;
}