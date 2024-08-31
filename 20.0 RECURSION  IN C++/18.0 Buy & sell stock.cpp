#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void maxProfitFinder(vector<int>&arr, int i, int &minprice, int &maxprofit){
    if(i == arr.size()) return;
    if(arr[i] <minprice) minprice = arr[i];
    int todayprofit = arr[i] - minprice; 
    if(todayprofit > maxprofit) maxprofit = todayprofit;

    maxProfitFinder(arr, i+1, minprice, maxprofit);
}
int maxprofit(vector<int>&arr){
    int minprice = INT_MAX;
    int maxprofit = INT_MIN;
    maxProfitFinder(arr, 0 , minprice, maxprofit);
    return maxprofit;
}
int main(){
    vector<int>arr = {7,1,5,3,6,4};
    cout<<maxprofit(arr);
    return 0;
}