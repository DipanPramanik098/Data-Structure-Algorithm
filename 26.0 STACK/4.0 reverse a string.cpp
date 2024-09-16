#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    string str = "Dipan";

    stack<char>s;

    // push in stack
    for(int i=0; i<str.length(); i++){
        s.push(str[i]);
    }

    // reverse ->using pop
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;
}