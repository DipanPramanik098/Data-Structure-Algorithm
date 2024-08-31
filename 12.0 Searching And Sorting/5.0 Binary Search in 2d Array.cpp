#include <bits/stdc++.h>
#include<iostream>
using namespace std;
bool bs(int a[][4], int r, int c,int key){
    int s = 0;
    int e = r*c-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        int rowidx = mid/c;
        int colidx = mid%c;
        if(a[rowidx][colidx]==key) return true;
        else if(a[rowidx][colidx]<key) s=mid+1;
        else e = mid-1;
    }
    return -1;
}
int main(){
    
    return 0;
}