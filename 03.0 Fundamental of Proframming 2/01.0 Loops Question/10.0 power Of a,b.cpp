#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int a,b;
    cout<<"Enter a and b only positive : ";
    cin >> a>>b;
    int power =1;
    for(int i = 1; i<=b; i++){
        power = power * a;
    }
    cout<<"a ^ b = "<<power;
    return 0;
}