#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        vector<int> getRow(int rowIndex) {
            long long i = (long long) rowIndex;
            long long curr = 1;
            vector<int>ans;
            for(long long j=0; j<=i; j++){
                ans.push_back((int)curr);
                curr = curr*(i-j)/(j+1);
            }
            return ans;
        }
    };
int main(){
    
    return 0;
}