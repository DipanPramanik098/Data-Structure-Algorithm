#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class NStack{
    int *a, *top, *next;
    int n;
    int size;
    int freespot;
    public:
    NStack(int _n, int _s):n(_n),size(_s){
        freespot = 0;
        a = new int[size];
        top = new int[n];
        next = new int[size];
        for(int i = 0; i < n; i++){
            top[i] = -1;
        }
        for(int i = 0; i < size; i++){
            next[i] = i+1;
        }
        next[size-1]=-1;
    }
    bool push(int x, int m){
        if(freespot == -1) return false;
        int index = freespot;
        freespot = next[index];
        a[index]=x;
        next[index] = top[m-1];
        top[m-1] = index;
        return true;
    }
    int pop(int m){
        if(top[m-1] == -1) return -1;
        int index = top[m-1];
        top[m-1] = next[index];
        int pop_element  = a[index];
        next[index] = freespot;
        freespot= index;
        return pop_element;
    }
};
int main(){
    NStack s(3,6);
    cout<<s.push(10,1);
    cout<<s.push(11,1);
    cout<<s.push(12,2);
    cout<<s.push(12,2);
    cout<<s.push(12,2);
    cout<<s.push(12,2);
    cout<<s.push(12,2);
    cout<<s.pop(1);

    return 0;
}