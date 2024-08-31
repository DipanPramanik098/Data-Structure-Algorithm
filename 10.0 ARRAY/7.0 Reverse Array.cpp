#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int i=0, j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
    // print
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}