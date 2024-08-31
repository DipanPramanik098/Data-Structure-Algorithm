#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void print(string & str, int i){
    if(i>= str.length()){
        cout<<str<<" ";
        return;
    }

    for(int j = i; j<str.length(); j++){
        // swap
        swap(str[i],str[j]);
        // recursion call
        print(str, i+1);
        // backtrack
        swap(str[i],str[j]);
    }
}
int main(){
    string str = "abcd";
    print(str,0);
    return 0;
}