#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int n;
    cin >> n;
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout <<  "factorial: " << fact << endl;
    return 0;
}