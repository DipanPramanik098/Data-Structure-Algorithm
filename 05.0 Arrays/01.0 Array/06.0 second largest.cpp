#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int sc(int a[],int n){
    int m = INT_MIN;
    int smax = m;
    for(int i=0;i<n;i++){
        if(a[i]>m){
            smax = m;
            m = a[i];
        }
        else if(a[i] > smax && a[i] != m) {
            smax = a[i];
        }
    }
    return smax;
}
int main(){
    int n;
    cout<<"enter the size : ";  
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Second Largest : "<<sc(arr,n);
    return 0;
}