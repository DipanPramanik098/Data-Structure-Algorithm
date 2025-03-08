#include <bits/stdc++.h>
#include<iostream>
using namespace std;
//~: Dipan Pramanik :~
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        int start = 0;
        int end =0;
        int ans;
        for(int i=0; i<N;i++){
            start= max(start,A[i]);
            end+=A[i];
        }
        while(start<=end){
            int mid = start + (end-start)/2;
            int pages = 0, student = 1;
            for(int i = 0; i<N ; i++){
                pages += A[i];
                if(pages>mid){
                    student++;
                    pages=A[i];
                }
            }
            if(student<=M){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
}; 
int main(){
    
    return 0;
}