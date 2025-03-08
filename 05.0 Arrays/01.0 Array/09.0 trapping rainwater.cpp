#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int trap(vector<int>& height) {
    int n = height.size(), water = 0;
    int leftmax = 0, rightmax = 0, maxheight = height[0], maxHeightIndex = 0;

    // find the max height 
    for(int i = 1; i<n; i++){
        if(height[i]>maxheight) {
            maxheight = height[i];
            maxHeightIndex= i;
        }
    }

    // left part calculate
    for(int i = 0; i<maxHeightIndex; i++){
        if(leftmax > height[i]){
            water += leftmax - height[i];
        }
        else{
            leftmax = height[i];
        }
    }

    // right part calculate
    for(int i = n-1; i>maxHeightIndex; i--){
        if(rightmax > height[i]){
            water += rightmax - height[i];
        }
        else{
            rightmax = height[i];
        }
    }
    return water;
}
int main(){
    
    return 0;
}