#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void spiral(vector<vector<int> >&v){
    int sr=0,sc=0,er=v.size()-1, ec = v[0].size()-1;
    int total = v.size()*v[0].size();
    int count = 0;
    while(count < total){
        for(int i=sc; i<=ec &&count < total; i++){
            cout<<v[sr][i]<<" ";
            count ++;
        }
        sr++;

        for(int i=sr; i<=er && count <= total;i++){
            cout<<v[i][ec]<<" ";
            count ++;
        }
        ec--;

        for(int i=ec; i>=sc && count <= total; i--){
            cout<<v[er][i]<<" ";
            count++;
        }
        er--;

        for(int i=er; i>=sr && count <= total; i--){
            cout<<v[i][sc]<<" ";
            count ++;
        }
        sc++;
    }
}
int main(){
    vector<vector<int> >v = {{1,2,3},{4,5,6},{7,8,9}};

    spiral(v);
    return 0;
}