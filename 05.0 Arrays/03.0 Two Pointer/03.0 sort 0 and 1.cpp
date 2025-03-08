#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void sortt(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i] == 1){
            swap(v[i],v[j]);
            j--;
        }else i++;
    }
}
void print(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}
int main(){
    vector<int>v = {1,1,0,1,0,1,1,0,0};
    sortt(v);
    print(v);
    return 0;
}