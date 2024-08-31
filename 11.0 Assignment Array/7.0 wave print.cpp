#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void wave(vector<vector<int>>&a){
    int m = a.size();
    int n = a[0].size();
    for(int col=0; col<n; col++){
        if(col%2==0){
            for(int i=0;i<m;i++){
                cout<<a[i][col]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<a[i][col]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int> >a = {{1,2,3,4}, {5,6,7,8}, {10,11,12,13}};
    wave(a);
    return 0;
}