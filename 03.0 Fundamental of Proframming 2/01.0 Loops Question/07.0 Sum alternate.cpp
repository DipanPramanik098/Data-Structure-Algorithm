#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    // 1 - 2 + 3 - 4 + 5 
    int n;
    cin >> n;
    int sum = 0;
    // approach 1  
    for(int i = 1; i<=n; i++){
        if(i%2 == 0) sum -= i;
        else sum += i;
    }
    cout<<"sum = "<< sum<<endl;

    // approach 2
    cout<<"Approach 2 =========================== ans  =  ";
    if(n%2 == 0) cout<< -n/2;
    else cout<< -n/2+n;
    return 0;
}