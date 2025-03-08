#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
int funique(int arr[], int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans^=arr[i];
    }
    return ans;
}
int main(){
    
    return 0;
}