#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {2,34,4,52,42,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    print(arr,size);
    return 0;
}