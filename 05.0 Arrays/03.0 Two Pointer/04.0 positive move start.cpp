#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void move(vector<int>& v){
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i] >=0){
            swap(v[i],v[j]);
            j--;
        }else i++;
    }
}
void print(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}
int main(){
    vector<int>v = {5,7,0,-12,2,-112,-4,1,3,5,98,-11};
    move(v);
    print(v);
    return 0;
}