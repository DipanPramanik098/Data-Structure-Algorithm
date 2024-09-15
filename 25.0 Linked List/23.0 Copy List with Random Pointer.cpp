#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return 0;
        // step 1 clone all nnode 
        Node* it = head;
        while(it){
            Node* cloneNode = new Node(it->val);
            cloneNode->next = it->next;
            it->next = cloneNode;
            it = it->next->next; 
        }
        // step2 :  Assign Random ptr;
        it = head;
        while(it){
            Node* cloneNode = it->next;
            cloneNode->random = it->random ? it->random->next : nullptr ;
            it = it->next->next;        
        }
        // step3 : detach 
        it = head;
        Node*cloneHead = it->next;
        while(it){
            Node* cloneNode = it->next;
            it->next = it->next->next;
            if(cloneNode->next){
                cloneNode->next = cloneNode->next->next;
            }
            it= it->next;
        }
        return cloneHead;    
    }
};
int main(){
    
    return 0;
}