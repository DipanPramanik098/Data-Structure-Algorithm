#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class Solution {
    public:
        int findMinDifference(vector<string>& timePoints) {
            vector<int>minutes;
            for(int i=0;i<timePoints.size();i++){
                string curr= timePoints[i];
    
                int hours = stoi(curr.substr(0,2));
                int min = stoi (curr.substr(3,2));
                int totalminutes = hours*60 + min;
                minutes.push_back(totalminutes);
            }
            sort(minutes.begin(),minutes.end());
    
            int mini= INT_MAX;
            int n = minutes.size();
    
            for(int i=0;i<n-1;i++){
                int dif = minutes[i+1]- minutes[i];
                mini = min(mini,dif);
            }
    
            int lastdif = (minutes[0]+1440) - minutes[n-1];
            mini = min(mini,lastdif);
    
            return mini;
        }
    };
int main(){
    
    return 0;
}