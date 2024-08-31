#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int bs(vector<int> &arr, int k){
    int i=0;
    int j=arr.size()-1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid] == k) return mid;
        else if(arr[mid] > k) j= mid-1;
        else i=mid+1; 
    }
    return -1;
}   
int main(){
    vector<int>arr={2,4,7,8,9,11,32};
    int key = 7;
    cout<<bs(arr,key);
    cout<<endl;

    // Inbuilt
    if(binary_search(arr.begin(),arr.end(),5)) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}