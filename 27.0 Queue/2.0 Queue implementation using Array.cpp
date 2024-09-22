#include <bits/stdc++.h>
#include<iostream>
using namespace std;

class Queue{
public:
int *arr;
int size;
int front;
int rear;

// Constructor
Queue(int size){
    this->size = size;
    arr = new int[size];
    front = 0;
    rear = 0;
}

// /push
void push(int data){
    if(rear == size){
        cout<<"Queue is full!"<<endl;
    }
    else{
        arr[rear] = data;
        rear++;
    }
}
// pop
void pop(){
    if(front == rear){
        cout<<"Queue is Empty!"<<endl;
    }
    else{
        arr[front] = -1;
        front++;
        if(front == rear){
            front=0;
            rear=0;
        }
    }
}

int getFront(){
    if(front == rear){
        cout<<"Queue is Empty!"<<endl;
        return -1;
    }
    return arr[front];
}

bool isEmpty(){
    return front == rear;
}

int getSize(){
    return rear-front;
}
};

int main(){
    Queue q(10);

    cout<<"Empty ?  :"<<q.isEmpty()<<endl;
    q.pop();
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(35);
    q.push(45);

    cout<<"size : "<<q.getSize()<<endl;
    cout<<"front : "<<q.getFront()<<endl;
    q.pop();
    q.pop();    
    cout<<"size : "<<q.getSize()<<endl;
    cout<<"front : "<<q.getFront()<<endl;
    cout<<"Empty ?  :"<<q.isEmpty()<<endl;
    return 0;
}