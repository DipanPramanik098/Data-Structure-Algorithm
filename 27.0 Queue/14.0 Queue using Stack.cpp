#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
class MyQueue {
public:
    stack<int>s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        int pop_element = -1;
        if(!s2.empty()){
            pop_element = s2.top();
        }else{
            // copy s1 element into s2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            pop_element = s2.top();
        }
        s2.pop();
        return pop_element;
    }
    
    int peek() {
        int front_element = -1;
        if(!s2.empty()){
            front_element = s2.top();
        }else{
            // copy s1 element into s2
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            front_element = s2.top();
        }
        return front_element;
    }
    
    bool empty() {
        return s1.empty()&&s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
int main(){
    
    return 0;
}