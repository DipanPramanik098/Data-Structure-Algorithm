#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void sortColors(vector<int>& nums) {
    int i=0,j=0,k=nums.size()-1;

    while(j<=k){
        if(nums[j]==2){
            swap(nums[j],nums[k]);
            k--;
        }
        else if(nums[j] == 0){
            swap(nums[j],nums[i]);
            i++;
            j++;
        }
        else j++;
    }
}
void print(vector<int>& v){
    for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
}
int main(){
    vector<int>v = {2,1,0,0,1,1,2,1,2,0,2};
    sortColors(v);
    print(v);
    return 0;
}