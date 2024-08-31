#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(vector<int>a){
    int s=0, e = a.size()-1;
    while(s<=e){
        if(s==e) return s;
        int mid = s+(e-s)/2;
        if(mid%2==0){
            if(a[mid] == a[mid+1]) s= mid+2;
            else e = mid;
        }
        else{
            if(a[mid] == a[mid - 1]) s= mid+1;
            else e = mid -1;       
        }
    }
    return -1;

}
int main(){
    vector<int>a = {1,1,2,2,3,3,4,4,3,6,6,4,4};
    int ans = solve(a);
    cout<<a[ans];
    return 0;
}