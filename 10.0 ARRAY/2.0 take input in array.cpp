#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5];
    // take input
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    // print
    printarray(arr,5);
    return 0;
}