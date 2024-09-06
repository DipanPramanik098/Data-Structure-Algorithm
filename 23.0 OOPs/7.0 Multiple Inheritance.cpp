#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class A{
    public:
    int physics;
};
class B{
    public:
    int chemistry;
};
class C : public A, public B{
    public:
    int maths;
};
int main(){
    C obj;
    cout<<obj.physics<<endl;
    cout<<obj.chemistry<<endl;
    cout<<obj.maths<<endl;
    return 0;
}