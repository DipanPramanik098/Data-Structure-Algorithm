#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[10]={10,33,22,11,545,12,133,44,12,11};
    // print array
    printarray(arr,10);
    return 0;
}