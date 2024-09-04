#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    int solve(vector<int>&v, int s, int e){
        if(s == e) return v[s];
        int maxLeftBorderSum=INT_MIN;
        int maxRightBorderSum = INT_MIN;
        int leftBorderSum =0, rightBorderSum =0;
        int mid = s + (e-s)/2;

        int maxLeftSum = solve(v,s,mid);
        int maxRightSum = solve(v,mid+1,e);


        // cross boorder sum
        for(int i=mid; i>=s; i--){
            leftBorderSum += v[i];
            maxLeftBorderSum = max(leftBorderSum,maxLeftBorderSum);
        }

        for(int i=mid+1; i<=e; i++){
            rightBorderSum += v[i];
            maxRightBorderSum = max(rightBorderSum,maxRightBorderSum);
        }
        int crossBorderSum = maxRightBorderSum + maxLeftBorderSum;

        return max(maxLeftSum, max(crossBorderSum,maxRightSum));
    }
    int maxSubArray(vector<int>& nums) {
        return solve(nums, 0, nums.size()-1);
    }
int main(){
    
    return 0;
}