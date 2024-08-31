#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void moveNegativeToEnd(int a[], int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(a[i]>= 0)i++;
        else if(a[j]<0)j--;
        else swap(a[i],a[j]);
    }
}
int main(){
    int a[]={1,7,-3,5,-1,0,-4,1};
    moveNegativeToEnd(a,8);
    print(a,8);
    return 0;
}