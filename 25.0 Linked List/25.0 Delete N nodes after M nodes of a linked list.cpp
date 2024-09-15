#include <bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    void solve(Node* &head, int n, int m) {
        // code here
        if(!head ) return;
        Node * it = head;
        for(int i=0;i<m-1; i++){
            if(!it) return;
            it = it->next;
        }
        if(!it) return;
        Node* mthNode = it;
        it = mthNode->next;
        for(int i=0; i<n; i++){
            if(!it) break;
            Node* temp = it->next;
            delete it;
            it = temp;
        }
        mthNode->next = it;
        solve(it,n,m);
    }
    
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        solve(head,n,m);
        return head;
    }
}; 
int main(){
    
    return 0;
}