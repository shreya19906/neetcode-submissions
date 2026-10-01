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
    void reorderList(ListNode* head) {
        deque<ListNode*> dq;
        while(head) {
            dq.push_back(head);
            head = head->next;
        };
        
        ListNode * temp = NULL;
        head = NULL;
        bool getFront = true;
        while(dq.size()) {
            if(getFront) {
                if(!head) {head = dq.front(); temp = head;}
                else {temp->next = dq.front(); temp = temp->next;}
                dq.pop_front();
            } else {
                 if(!head) {head = dq.back(); temp = head;}
                else {temp->next = dq.back(); temp = temp->next;}
                 dq.pop_back();
            }
            getFront = !getFront;
        }
        temp->next = NULL;
        
    }
};
