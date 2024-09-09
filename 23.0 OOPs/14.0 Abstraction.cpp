#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    vector<int>v  = {3,4,1,2};

    sort(v.begin(), v.end());

    for(auto it : v)
        cout<<it<<" "<<endl;
    return 0;
}