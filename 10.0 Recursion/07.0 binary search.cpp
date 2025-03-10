#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    int bs(vector<int>&v, int i, int j, int k){
        // base case if start > end then ans not found
        if(i>j) return -1;
        // process - find mid and check
        int mid = i+(j-i)/2;
        if(v[mid] == k) return mid;
        // recursive call by reducing the window size 
        else if(v[mid] > k) return bs(v, i, mid-1, k);
        else return bs(v, mid+1, j, k);
    }
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10,11,12};
    int key1 = 67;
    int key2 = 7;
    // i denoted to the first index of the array
    int i = 0;
    cout<<bs(v, i, v.size()-1, key1)<<endl;
    cout<<bs(v, i, v.size()-1, key2)<<endl;
    return 0;
}