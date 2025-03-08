#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int count(string str){
    int count = 0;
    while(str[count] != '\0'){
        count++;
    }
    return count;
}
int main(){
    string str = "Dipan Pramanik";

    cout<<count(str);
    return 0;
}