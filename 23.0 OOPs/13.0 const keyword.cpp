#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    const int x = 5;
    // x=10;
    // NOTE: initilization can be done but re-assign can't be done


    //  TODO: const with pointer
    // const int *a = new int(2);
    int const *a = new int(2);
    cout<<*a<<endl;
    // *a = 20;
    int b = 20;
    a = &b;
    cout<<*a<<endl;
    delete a;
    
    return 0;
}