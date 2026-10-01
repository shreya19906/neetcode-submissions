/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode * temp = head;
        int size = 0;
        while(temp) {
            temp = temp->next;
            size++;
        }
        int k = size - n;
        temp = head;
        if(k == 0) {
            head = head->next;
            delete temp;
        } else {
            k = k-1;
            cout<<k<<endl;
            while(k) {temp= temp -> next; k--;};
            if(temp->next)
            temp -> next = temp->next->next;
            else 
            temp -> next = NULL;
        }
      return head;

    }
};
