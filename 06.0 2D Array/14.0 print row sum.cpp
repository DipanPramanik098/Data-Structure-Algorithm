#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
    
int main(){
    
    vector<vector<int> > arr = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    for(int i=0;i<arr.size();i++){
        int sum = 0;
        for(int j=0;j<arr[0].size();j++){
            sum += arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" = "<<sum<<endl;
    }
    return 0;
}