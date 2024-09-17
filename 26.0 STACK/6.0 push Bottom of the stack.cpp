#include <bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }
    // step 2
    int top_element = s.top();
    s.pop();
    // recursive call
    solve(s,target);
    // backtracking
    s.push(top_element);
}

void insertBottom(stack<int>& s){
    // todo: Must Condition
    if(s.empty()){
        cout<<"Stack is empty! Can't Insert at bottom."<<endl;
        return;
    }
    int target = s.top();
    s.pop();
    solve(s,target);
}
    
int main(){
    stack<int>s;
    s.push(17);
    s.push(11);
    s.push(3);
    s.push(9);

    insertBottom(s);

    cout<<"printing  :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}