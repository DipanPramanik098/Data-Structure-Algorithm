#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int greaters(int a[], int n, int key){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > key) count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter the size : ";  
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter Element to find greater : ";
    cin>>x;

    cout<<"count  : "<<greaters(arr,n,x);
    return 0;
}