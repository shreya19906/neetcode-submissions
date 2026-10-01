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
        int count = 0;
        ListNode * temp = head;
        while(temp) {
            count++;
            temp = temp->next;
        }
        temp = head;
        for(int i =0; i<count - n - 1; i++)
        temp =temp->next;

        if(temp == head && n == count){ head = head->next; return head;}
        ListNode* node = temp->next;
        temp->next = temp->next->next;
        delete node;
        return head;

    }
};
