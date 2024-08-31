#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int dividend, int divisor){
    int s =-0, e=dividend;
    int ans =0;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(abs(mid*divisor) == abs(dividend)) {
            ans = mid;
            break;
        }
        if(abs(mid*divisor) > abs(dividend)) e = mid -1;
        else{
            ans = mid;
            s=mid+1;
        }
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0)){
        return ans;
    }
    return -ans;
}   
int main(){
    cout<<solve(70,-17)<<endl;
    return 0;
}