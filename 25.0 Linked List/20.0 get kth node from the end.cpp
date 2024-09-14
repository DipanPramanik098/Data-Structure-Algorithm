#include <bits/stdc++.h>
#include<iostream>
using namespace std;
* SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void fun(SinglyLinkedListNode* &llist, int &positionFromTail, int &ans){
    if(llist == 0) return;
    fun(llist->next, positionFromTail,ans);
    
    if(positionFromTail == 0){
      ans = llist->data;  
    } 
    positionFromTail--;
}
int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int ans = -1;
    fun(llist,positionFromTail,ans);
    return ans;
}
int main(){
    
    return 0;
}