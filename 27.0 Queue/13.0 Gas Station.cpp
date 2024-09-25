#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int shortegeGas = 0;
        int remainGas = 0;
        int startIndex = 0;
        for(int i=0; i<gas.size(); i++){
            remainGas =  remainGas + gas[i] - cost[i];
            if(remainGas <0){
                shortegeGas = shortegeGas + abs(remainGas);
                startIndex = i+1;
                remainGas = 0;
            }

        }
        if(remainGas >= shortegeGas) return startIndex;
        return -1;
    } 
};
int main(){
    
    return 0;
}