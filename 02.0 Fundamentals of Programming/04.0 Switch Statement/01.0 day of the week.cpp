#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int num;
    cout<<"enter day Num (1-7) : ";
    cin>>num;
    switch(num){
        case 1: cout<<"MONDAY";
            break;
        case 2: cout<<"TUESDAY";
            break;
        case 3: cout<<"WEDNESDAY";
            break;
        case 4: cout<<"THRUSDAY";
            break;
        case 5: cout<<"FRIDAY";
            break;
        case 6: cout<<"SATURDAY";
            break;
        case 7: cout<<"SUNDAY";
            break;
        default : cout<<"Only 7 days psesent in a week";
    }
    return 0;
}