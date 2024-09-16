#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // function
    void push(int data)
    {
        if (size - top > 1)
        {
            // space Available
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Stack overflow/ Stack is full" << endl;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            // stack underflow
            cout << "Stack underflow - Nothing is present to delete." << endl;
        }
        else
        {
            top--;
        }
    }

    int getTopElement()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
        }
        else
        {
            return arr[top];
        }
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
};
int main()
{
    // create
    Stack s(10);

    // just check
    s.pop();

    // empty
    cout << s.isEmpty() << endl;
    // initialize
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    // empty
    cout << s.isEmpty() << endl;

    // top element
    cout << "Top element" << s.getTopElement() << endl;

    // size
    cout << "size:  " << s.getSize() << endl;

    // delete
    s.pop();
    // top element
    cout << "Top element" << s.getTopElement() << endl;

    // size
    cout << "size:  " << s.getSize() << endl;
    return 0;
}