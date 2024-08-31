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
        if( mid-1 >= 0 && arr[mid - 1] == k) return mid-1;
        if( mid+1 >= 0 && arr[mid + 1] == k) return mid+1;
        else if(arr[mid] > k) j= mid-2;
        else i=mid+2; 
    }
    return -1;
}   
int main(){
    vector<int>arr={10,3,40,20,50,80,70};
    int key = 50;
    cout<<bs(arr,key);
    cout<<endl;

    // Inbuilt
    if(binary_search(arr.begin(),arr.end(),5)) cout<<"Found";
    else cout<<"Not Found";
    return 0;
}