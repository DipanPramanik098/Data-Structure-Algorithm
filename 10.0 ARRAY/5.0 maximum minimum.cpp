#include <bits/stdc++.h>
#include<iostream>
using namespace std;
    
int main(){
    int arr[10]= {2,4,6,33,0,1312,4423,5,-3,-43};
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0; i<10; i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }
    cout<<"minimum = "<<mini<<endl;
    cout<<"maximum = "<<maxi<<endl;
    return 0;
}