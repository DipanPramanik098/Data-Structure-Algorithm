#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void insertBottom(stack<int> &s, int target){
    // base case
    if(s.empty()){
        s.push(target);
        return;
    }
    // step 2
    int top_element = s.top();
    s.pop();
    // recursive call
    insertBottom(s,target);
    // backtracking
    s.push(top_element);
}

void reverseStack(stack<int>& s){
    // base case
    if(s.empty()) return;

    // solve one case
    int target = s.top();
    s.pop();

    // reverse stack
    reverseStack(s);
    // target push into insert at bottom 
    insertBottom(s,target);
}

int main(){
    stack<int>s;

    s.push(17);
    s.push(67);
    s.push(23);
    s.push(11);
    s.push(121);
    reverseStack(s);


    cout<<"after reverse printing  :"<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}