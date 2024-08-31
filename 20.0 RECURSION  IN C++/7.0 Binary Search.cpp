#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    int Binary(int arr[],int key, int i, int j){
        if(i>j) return -1;

        // 
        int mid = i + (j-i)/2;
        if(arr[mid] == key) return mid;

        // 
        if(arr[mid] >key){
            return Binary(arr , key, i, mid-1);
        }
        else{
            return Binary(arr , key,mid+1,j);
        }
    }
int main(){
    int arr[] = {1,2,3,4,5,6,9};
    int n = 7;
    int start = 0, end = n-1;
    int key = 11;
    cout<<Binary(arr,key,start,end);
    return 0;
}