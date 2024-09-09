#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Abc{
    int x,y;
    public:
    static void print(){
        cout<<__FUNCTION__;
    }
};

int main(){
    Abc::print();
    return 0;
}