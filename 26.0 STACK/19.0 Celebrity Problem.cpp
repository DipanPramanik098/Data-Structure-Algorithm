#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int cb(vector<vector<int>>& M , int n){
    stack<int>st;

    // step 1: push all person in stack
    for(int i=0; i<n; i++){
        st.push(i);
    }

    // step 2: run discard method to get might be celebraty
    while(st.size()!=1){
        int a = st.top(); st.pop();
        int b= st.top(); st.pop(); 

        // if a know b
        if(M[a][b]){
            // a is not celebrity . b might be
            st.push(b);
        }else{
            // b is not celebrity , a might be
            st.push(a);
        }
    }

    // step 3: last person in stack might be celebrity - check
    int mightbeCelebrity = st.top(); st.pop();

    // check he should not know anyone --> all row zero for that  mightbeCelebrity
    for(int i=0; i<n; i++){
        if(M[mightbeCelebrity][i] != 0 ) return -1;
    }
    // check everyone should know him --> all column 1 mightbeCelebrity to mightbeCelebrity
    for(int i=0; i<n; i++){
        if(M[i][mightbeCelebrity] == 0 && i != mightbeCelebrity) return -1;
    }

    // if not -1 return then mightbeCelebrity is celebritry
    return mightbeCelebrity;
}
int main(){
    vector<vector<int>>v = {{0,0,0},{1,1,0},{1,1,0}};
    int n = 3;
    int ans = cb(v,n);
    cout<<ans;
    return 0;
}