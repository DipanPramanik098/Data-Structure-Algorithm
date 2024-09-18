#include <bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
vector<int>prevSmaller (vector<int>&v){
    stack<int>s;
    s.push(-1);

    vector<int>ans(v.size());
    for(int i=0; i<v.size();i++){
        int curr = v[i];
        while(s.top() !=-1 && v[s.top()]>=curr){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int main(){
    
    return 0;
}