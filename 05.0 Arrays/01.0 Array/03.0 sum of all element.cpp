#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int sum(int a[], int n){
    int sum =0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}
    
int main(){
    int n;
    cout<<"enter the size : ";  
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"sum = "<<sum(arr,n);
    return 0;
}