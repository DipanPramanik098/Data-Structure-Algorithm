#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    int solve(vector<int>& days, vector<int>& costs, int i){
        // base case
        if(i>=days.size()) return 0;

        // solve 1 case
        // take 1 day poass
        int cost1 = costs[0] + solve(days,costs,i+1);

        // 7 dqay pas
        int passend = days[i]+7-1;
        int j = i;
        while(j<days.size() && days[j]<=passend) j++;
        int cost7 = costs[1] + solve(days,costs,j);

        // 30 day pass
        passend = days[i]+30-1;
        j = i;
        while(j<days.size() && days[j]<=passend) j++;
        int cost30 = costs[2] + solve(days,costs,j);

        return min(cost1, min(cost7,cost30));
    }
int main(){
    vector<int> days = {3,5,6,8,9,10,11,12,13,14,15,16,20,21,23,25,26,27,29,30,33,34,35,36,38,39,40,42,45,46,47,48,49,51,53,54,56,57,58,59,60,61,63,64,67,68,69,70,72,74,77,78,79,80,81,82,83,84,85,88,91,92,93,96};
    vector<int>costs = {3,17,57};
    cout<<solve(days,costs,0)<<endl;
    return 0;
}