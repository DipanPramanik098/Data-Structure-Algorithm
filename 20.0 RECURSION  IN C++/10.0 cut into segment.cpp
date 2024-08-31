#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int n, int x, int y, int z){
    // base case 
    if( n==0 ) return 0;
    if(n<0) return INT_MIN;


    int ans = 0;
    int ans1 = solve(n-x, x, y, z)+1;
    int ans2 = solve(n-y, x, y, z)+1;
    int ans3 = solve(n-z, x, y, z)+1;

    ans = max(ans1, max(ans2, ans3));

    // if(ans < 0) ans = 0;
    return ans;
}
int main(){
    cout<<"Hello world!"<<endl;
    int n = 8;
    int x = 3;
    int y = 3;
    int z = 3;


    int ans = solve(n,x,y,z);

    if(ans < 0) ans = 0;
    cout<<ans<<endl;
    return 0;
}