#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    int arr[10] = {0,0,0,1,1,3,2,1,0,1};
    int c0=0,c1=0;
    for(int i=0; i<10; i++){
        if(arr[i]==0){
            c0++;
        }
        if(arr[i]==1) c1++;
    }
    cout<<"0 = "<<c0<<"   1 = "<<c1; 
    return 0;
}