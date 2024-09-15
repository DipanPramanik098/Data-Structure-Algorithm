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
    ListNode *mergeNodes(ListNode *head)
    {
        if (!head)
            return 0;
        ListNode *slow = head, *fast = head->next, *newLastNode = NULL;
        int sum = 0;
        while (fast)
        {
            if (fast->val != 0)
            {
                sum += fast->val;
            }
            else
            {
                slow->val = sum;
                newLastNode = slow;
                slow = slow->next;
                sum = 0;
            }
            fast = fast->next;
        }
        ListNode *temp = slow;
        newLastNode->next = 0;
        // delete Memory
        while (temp)
        {
            ListNode *x = temp->next;
            delete temp;
            temp = x;
        }
        return head;
    }
};
int main()
{

    return 0;
}