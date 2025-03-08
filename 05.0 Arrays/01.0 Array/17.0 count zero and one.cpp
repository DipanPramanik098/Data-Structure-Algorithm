#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    int arr[] = {0,1,0,0,0,0,1,1,0,1,1,1,0};
    int size  = 13;
    int z=0,o=0;

    for(int i=0;i<size;i++){ 
        if(arr[i] == 0) z++;
        else o++;
    }
    cout<<"Number of Zeros : "<<z<<endl;
    cout<<"Number of Ones : "<<o<<endl;
    return 0;
}