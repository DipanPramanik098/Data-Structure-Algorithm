#include <bits/stdc++.h>
#include<iostream>
using namespace std;
// todo: Include Stack
#include<stack>
int main(){
    // // creation
    // stack<int>st;

    // // insertion
    // st.push(10);
    // st.push(50);
    // st.push(20);
    // st.push(70);
    // st.push(40);

    // // remove
    // st.pop();

    // // check element on top
    // cout<<"element on top :"<<st.top()<<endl;

    // // size
    // cout<<"size :"<<st.size()<<endl;

    // // empty
    // cout<<"empty :"<<st.empty()<<endl; 


    stack<int>st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // print stack
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    cout<<endl;
    return 0;
}