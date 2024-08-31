#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void LinearSearch(int arr[], int n, int k){
    for(int i = 0; i < n; i++){
        if(arr[i] == k){
            cout<<"found at index "<<i<<endl;
            return;
        }
    }
    cout<<"not found";
}
int main(){
    int arr[5];
    // take input
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"enter key ";
    cin>>key;
    
    LinearSearch(arr,5,key);
    return 0;
}