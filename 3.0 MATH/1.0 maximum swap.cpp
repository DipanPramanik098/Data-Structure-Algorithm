#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
public:
    int maximumSwap(int num) {
        // step 1 :  make num into string
        string nums = to_string(num);

        int maxi = INT_MIN;
        int index;
    // find the greater for each num for his right side
        for(int i = 0; i<nums.size(); i++){

            maxi = nums[i]-'0';
            for(int j = i+1; j<nums.size(); j++){
                if(maxi <= nums[j]-'0')
                {
                    maxi = nums[j]-'0';
                    index = j;
                }
            }
    // if greater found then swap and break the loop
            if(nums[i]-'0'<maxi){
                swap(nums[i],nums[index]);
                break;
            }
        }
        return stoi(nums);
    }
};
int main(){
    
    return 0;
}