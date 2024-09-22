#include <bits/stdc++.h>
#include<iostream>
#include<queue>
using namespace std;
    
int main(){
    queue<int> q;
    // check empty
    cout<<"empty? "<<q.empty()<<endl;
    // push
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout<<"empty? "<<q.empty()<<endl;
    // size
    cout<<"size: "<<q.size()<<endl;

    // pop
    q.pop();

    cout<<"empty? "<<q.empty()<<endl;
    // size
    cout<<"size: "<<q.size()<<endl;

    // front
    cout<<"front: "<<q.front()<<endl;
    return 0;
}