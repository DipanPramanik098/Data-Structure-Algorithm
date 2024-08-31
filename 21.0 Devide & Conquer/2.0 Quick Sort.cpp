#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int partition(int *a,int s, int e){
    int pi = s, pe = a[s];
    int count =0;
    for(int i=s+1; i<=e; i++){
        if(a[i]>=pe) count++;
    }

    int rightindex = s+count;
    swap(a[pi], a[rightindex]);

    pi = rightindex;

    int i=s, j=e;
    while(i<pi && j>pi){
        while(a[i]<=pe) i++;
        while(a[j]>=pe) j--;
        if(i<pi && j>pi) swap(a[i],a[j]);
    }
    return pi;
}
void Quicksort(int *a, int s, int e){
    if(s>=e) return;

    int p = partition(a,s,e);

    Quicksort(a,s,p-1);
    Quicksort(a,p+1,e);
}
int main(){
    int arr[] = {38,27,3,3,3,9,20};
     int n = 7;
     int s =0;
     int e = n-1;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     Quicksort(arr,s,e);
     cout<<"After sorting "<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    return 0;
}