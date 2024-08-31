#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void missing(int a[],int n){
    int i=0;
    while(i<n){
        int index = a[i]-1;
        if(a[i]!=a[index]){
            swap(a[i],a[index]);
        }
        else i++;


        for(int i=0;i<n;i++){
            if(a[i]!=i+1){
                cout<<i+1<<" "<<endl;
            }
        }
    }
}
int main(){
    
    return 0;
}