#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void merge(int *arr, int s, int e){
    int mid = (s+e)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int* left = new int[len1];
    int* right = new int[len2];

    int k = s;
    for(int i=0;i<len1;i++){
        left[i] = arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i] = arr[k];
        k++;
    }

    int li=0,ri=0,mainindex =s;

    while(li<len1 && ri<len2){
        if(left[li]<right[ri]){
            arr[mainindex] = left[li];
            li++;
            mainindex++;    
        }
        else{
            arr[mainindex++] = right[ri++];
        }
    }

    while(li<len1){
        arr[mainindex++] = left[li++];
    }
    while(ri<len2){
        arr[mainindex++]=right[ri++];
    }
}
void mergesort(int *arr, int s, int e){
    if(s>=e) return;
    int mid = s+ (e-s)/2;
    mergesort(arr, s,mid);    
    mergesort(arr, mid+1,e);

    merge(arr,s,e);    
}
int main(){
     int arr[] = {38,27,3,3,3,9,20};
     int n = 7;
     int s =0;
     int e = n-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     mergesort(arr,s,e);
     cout<<"After sorting "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}