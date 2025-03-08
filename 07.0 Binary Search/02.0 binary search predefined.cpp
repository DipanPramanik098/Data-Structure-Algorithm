#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~

int main(){
    vector<int>v={2,4,6,8,11};

    if(binary_search(v.begin(),v.end(),5)) cout<<"Found";
    else cout<<"Not Found"; 
    
    return 0;
}