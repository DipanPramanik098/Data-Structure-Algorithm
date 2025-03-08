#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
void rev(string &str){
    int i=0; 
    int j= str.length()-1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}
int main(){
    string str = "Dipan Pramanik";
    cout << str<<endl;
    rev(str);    
    cout<<str;
    return 0;
}