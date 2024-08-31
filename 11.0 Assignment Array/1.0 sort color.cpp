#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void sort(int arr[], int n){
    int i=0,j=0,k=n-1;
    while(j<=k){
        if(arr[j]==2){
            swap(arr[j],arr[k]);
            k--;
        }
        else if(arr[j]==0){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else j++;
    }
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]= {0,1,0,0,1,2,0,1,2};
    sort(arr,9);
    print(arr,9);
    return 0;
}