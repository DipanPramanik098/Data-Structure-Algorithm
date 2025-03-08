#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(n%5 == 0){
        cout<<n<<" is DIVISIBLE by 5."<<endl;
    }else{
        cout<<n<<" is NOT DIVISIBLE by 5."<<endl;
    }
    return 0;
}