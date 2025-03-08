#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        int minimumSum(int num) {
            vector<int>arr;
            while(num>0){
                int ld = num%10;
                num/=10;
                arr.push_back(ld);
            }
            int sum = 0;
            sort(arr.begin(),arr.end());
            int n1 = arr[0]*10 + arr[2];
            int n2 = arr[1]*10 + arr[3];
            return n1+n2;
        }
    };
int main(){
    
    return 0;
}