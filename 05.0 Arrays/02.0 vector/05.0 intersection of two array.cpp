#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void intersec(vector<int>&v1, vector<int>&v2){
    vector<int>ans;
    for(int i=0; i<v1.size(); i++){
        for(int j=0; j<v2.size(); j++){
            if(v1[i] == v2[j]){
                ans.push_back(v1[i]);
                v1[i] = -1;
                v2[j] = -1;
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
}
int main(){
    vector<int>v1 = {1,2,3,3,5};
    vector<int>v2 = {3,5,5,7};

    intersec(v1,v2);
    return 0;
}