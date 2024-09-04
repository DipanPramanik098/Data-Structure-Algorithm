// TODO: Count Inversion Problem
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int merge(vector<int>&arr,vector<int>&temp, int s, int mid, int e){
    int i=s, j=mid+1, k =s;
    int c =0;
    while(i<=s &&j<=e){
        if(arr[i]<=arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
            c += mid - i + 1;
        }
    }
    while(i<=s) temp[k++] = arr[i++];
    while(j<=e) temp[k++] = arr[j++];

    while(s<=e){
        arr[s] = temp[s];
        s++;
    }
    return c;
}

int mergeSort(vector<int>&arr, vector<int>&temp, int i, int j){
    if(i>=j) return 0;

    int mid = i+(j-i)/2;
    int c =0;
    c+=mergeSort(arr,temp,i, mid);
    c+=mergeSort(arr,temp,mid+1,j);
    c+=merge(arr,temp,i,mid,j);

    return c;
}
int main(){
    vector<int>arr = {8,4,2,1};
    vector<int>temp(arr.size(),0);
    int c = mergeSort(arr, temp,0,arr.size()-1);
    cout<<c<<endl;
    return 0;
}