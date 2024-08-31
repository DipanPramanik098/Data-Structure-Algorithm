#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void printarr(vector<int>&arr, int start, int end){
    if(end == arr.size()) return;

    for(int i = start; i <= end; i++){
        cout<<arr[i];
    }
    cout<<endl;

    printarr(arr, start, end+1);
}
void print(vector<int>&arr){
    for(int start = 0; start <arr.size(); start++){
        int end = start;
        printarr(arr, start, end);
    }
}
int main(){
    vector<int>arr = {1,2,3,4,5};
    print(arr);    
    return 0;
}