#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>mp;
        for(auto it : arr1) mp[it]++;
        int k = 0;
        for(int i = 0; i<arr2.size(); i++){
            int count = mp[arr2[i]];
            int m = k+count;
            while(k<m){
                arr1[k] = arr2[i];
                k++;
            }
            mp.erase(arr2[i]);
        }
        int x = k;
        for(auto i : mp){
            while(i.second > 0){
                arr1[k] = i.first;
                k++;
                i.second--;  

            }
        }
        sort(arr1.begin() + x, arr1.end());
        return arr1;
    }
};
int main(){
    
    return 0;
}