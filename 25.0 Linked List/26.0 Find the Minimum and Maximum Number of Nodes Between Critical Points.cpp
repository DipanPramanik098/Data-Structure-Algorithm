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
      vector<int> nodesBetweenCriticalPoints(ListNode *head)
      {
          vector<int> ans = {-1, -1};
          ListNode *prev = head;
          if (!prev)
              return ans;
          ListNode *curr = head->next;
          if (!curr)
              return ans;
          ListNode *nxt = head->next->next;
          if (!nxt)
              return ans;

          int lastcp = -1;
          int firstcp = -1;
          int minD = INT_MAX;
          int i = 1;
          cout << "hi";
          while (nxt)
          {
              bool isCP = ((curr->val > prev->val && curr->val > nxt->val) || (curr->val < prev->val && curr->val < nxt->val))
                              ? true
                              : false;
              cout << isCP;
              if (isCP == true && firstcp == -1)
              {
                  firstcp = i;
                  lastcp = i;
              }
              else if (isCP)
              {
                  minD = min(minD, i - lastcp);
                  lastcp = i;
              }
              i++;
              prev = prev->next;
              curr = curr->next;
              nxt = nxt->next;
          }
          cout << firstcp << endl;
          cout << lastcp << endl;
          if (lastcp == firstcp)
              return ans;
          else
          {
              cout << "hi";
              ans[0] = minD;
              ans[1] = lastcp - firstcp;
          }
          return ans;
      }
  };
  int main()
  {

      return 0;
  }