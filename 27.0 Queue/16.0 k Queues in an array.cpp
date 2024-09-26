#include <bits/stdc++.h>
#include <iostream>
using namespace std;
//~: Dipan Pramanik :~
class kQueue
{
public:
    int n, k, freespot;
    int *arr, *front, *rear, *next;

    kQueue(int _n, int _k) : n(_n), k(_k), freespot(0)
    {
        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < k; i++)
        {
            front[i] = rear[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            next[i] = i + 1;
        }
        next[n - 1] = -1;
    }
    // push x into qith queue
    bool push(int x, int qi)
    {
        // overflow
        if (freespot == -1)
            return false;

        // find first free index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // if firsr element in qi
        if (front[qi] == -1)
        {
            front[qi] = index;
        }
        else
        {
            next[rear[qi]] = index;
        }

        // update next
        next[index] = -1;

        // update rear
        rear[qi] = index;
        arr[index] = x;
        return true;
    }

    // pop element from qith queue
    int pop(int qi){
        // underflow
        if(front[qi] == -1) return -1;

        // find index to pop
        int index = front[qi];

        // front update
        front[qi] = next[index];

        // update freespots
        next[index] = freespot;
        freespot = index;

        return arr[index];
    }
    ~kQueue(){
        delete [] arr;
        delete [] next;
        delete [] front;
        delete [] rear;
    }
};

 int main()
{
    kQueue kq(8,3);
    cout<<kq.push(1,0);
    cout<<kq.push(2,0);
    cout<<kq.push(5,1);
    return 0;
}