#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int firstoccurance(vector<int>& a, int k){
    int s = 0, e=a.size()-1;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(a[mid] == k){
            ans = mid;
            e = mid -1;
        }else if(a[mid] > k) e = mid- 1;
        else s = mid+1;
    }
    return ans;

}
int main(){
    vector<int>arr = {1,2,3,3,3,3,3,4,5};

    int k;
    cin>>k;

    cout<<firstoccurance(arr,k)<<endl;
    return 0;
}