#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    int arr[9]= {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int i = 0;
    int j = size - 1;
    while(i<=j){
        cout<<arr[i]<<" ";
        if(i==j){
            i++;
            break;
        }
        cout<<arr[j]<<" ";
        i++;
        j--;
    }

    return 0;
}