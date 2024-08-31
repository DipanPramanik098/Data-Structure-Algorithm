#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
int first_occurance(vector<int> &arr, int k){
    int i=0;
    int j=arr.size()-1;
    int ans = -1;
    while(i<=j){
        int mid = i + (j-i)/2;
        if(arr[mid] == k){
            ans = mid;
            j=mid -1 ;
        } 
        else if(arr[mid] > k) j= mid-1;
        else i=mid+1; 
    }
    return ans;
}   
int main(){
    vector<int>arr={1,2,3,3,3,3,3,4,5};
    int key = 4;
    cout<<first_occurance(arr,key);
    cout<<endl;

    return 0;
}