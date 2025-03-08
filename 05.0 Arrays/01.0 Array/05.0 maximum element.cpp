#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int maximum(int a[],int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}
int main(){
    int n;
    cout<<"enter the size : ";  
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"maximum = "<<maximum(arr,n);
    return 0;
}