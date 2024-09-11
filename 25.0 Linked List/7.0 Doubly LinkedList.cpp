#include <bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // NOTE: Constructor
    Node(){
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print(Node* &head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        len++;
    }
    return len;
}
// TODO: Insert at head O(1)
void insert_head(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        Node* newNode = new Node(data);

        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

// TODO: insert_tail
void insert_tail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else{
        
        Node* newNode = new Node(data);

        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}


// TODO: insert_anyPos
void insert_anyPos(Node* &head, Node* &tail, int data, int position){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }else{
        // not empty
        if( position == 1){
            insert_head(head,tail,data);
            return;
        }
        int len = getLength(head);
        if(position > len){
            insert_tail(head, tail, data);
            return;
        }
        // middle
        // step1 find prev & curr
        int i = 1;
        Node * prevNode = head;
        while(i<position-1){
            prevNode = prevNode->next;
            i++;
        }
        Node * currNode = prevNode->next;

        Node* newNode = new Node(data);

        // 
        prevNode->next = newNode;
        newNode->prev = prevNode;
        currNode->prev = newNode;
        newNode->next = currNode;
    }
}


int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    Node* head = first;
    Node* tail = third;

    first->prev = NULL;
    first->next = second;
    second->prev=  first;
    second->next = third;
    third->prev = second;
    third->next = NULL;

    cout<<getLength(first)<<endl;

    print(head);
    cout<<endl;


    insert_head(head, tail, 101);

    print(head);
    cout<<endl;

    insert_tail(head, tail, 101);
    print(head);
    cout<<endl;

    
    insert_anyPos(head,tail,188979886,1);
    insert_anyPos(head,tail,188979886,3);
    
    print(head);
    cout<<endl;

    return 0;
}