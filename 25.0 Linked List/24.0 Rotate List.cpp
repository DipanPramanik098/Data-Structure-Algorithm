#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    int get(ListNode *&head)
    {
        ListNode *temp = head;
        int l = 0;
        while (temp)
        {
            l++;
            temp = temp->next;
        }
        return l;
    }
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head)
            return 0;
        int len = get(head);
        int actualRotateK = k % len;
        if (actualRotateK == 0)
            return head;
        int newLastpos = len - actualRotateK - 1;
        ListNode *newLastNode = head;
        for (int i = 0; i < newLastpos; i++)
        {
            newLastNode = newLastNode->next;
        }
        ListNode *newHead = newLastNode->next;
        newLastNode->next = 0;
        ListNode *it = newHead;
        while (it->next)
        {
            it = it->next;
        }
        it->next = head;
        return newHead;
    }
};
int main()
{

    return 0;
}