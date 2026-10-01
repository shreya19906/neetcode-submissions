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
    ListNode* mergeList(ListNode * l1, ListNode* l2) {
        ListNode * head = NULL, *temp = NULL;
        while(l1 && l2) {
            if(l1->val <= l2->val ) {
                if(!head) {head = l1; l1 = l1->next; temp = head;}
                else {temp -> next = l1; temp = temp->next; l1 = l1->next;}
            } else {
                 if(!head) {head = l2; l2 = l2->next; temp = head;}
                else {temp -> next = l2; temp = temp->next; l2 = l2->next;}
            }
        }
        if(l1) temp -> next = l1;
        if(l2) temp -> next = l2;
        return head;
    }
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() < 2) return lists.size() > 0 ? lists[0] : NULL;
        stack<ListNode*> listStack;
        for(auto it: lists)
            listStack.push(it);
        while(listStack.size() > 1) {
            ListNode * head1 = listStack.top();
            listStack.pop();
            ListNode * head2 = listStack.top();
            listStack.pop();
           ListNode * head = mergeList(head1, head2);
           listStack.push(head);
        }
        return listStack.top();
    }
};
