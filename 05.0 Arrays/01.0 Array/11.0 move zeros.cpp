#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void moveZeroes(vector<int>& nums) {
    int i =0;
    for(int j=0; j<nums.size(); j++){
        if(nums[j] != 0){
            swap(nums[i],nums[j]);
            i++;
        }
    }
}
int main(){
    vector<int> nums = {0,1,2,0,0,0,11,2,10,0,0};
    
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    cout<<"After apply function "<<endl;
    moveZeroes(nums);
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}