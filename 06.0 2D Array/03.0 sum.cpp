#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int sum(vector<vector<int>>&v){
    int s = 0;
    for(int i=0; i<v.size();i++){
        for(int j=0; j<v[0].size(); j++){
            s+=v[i][j];
        }
    }
    return s;
}
int main(){
    vector<vector<int> > arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    cout<<"sum = "<<sum(arr);
    return 0;
}