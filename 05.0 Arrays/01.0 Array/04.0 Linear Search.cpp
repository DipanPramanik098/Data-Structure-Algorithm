#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int linearsearch(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if(a[i] == key) return i;
    }
    return -1;
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
    cout<<"Enter Element to search : ";
    cin>>x;

    cout<<"index at  : "<<linearsearch(arr,n,x);
    return 0;
}