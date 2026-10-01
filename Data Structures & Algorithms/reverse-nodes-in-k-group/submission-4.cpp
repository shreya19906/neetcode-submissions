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
    ListNode* reverse(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next= NULL;
        return newHead;
    }
    void print(ListNode* head) {
        ListNode* temp = head;
        while(temp) {
            cout<<" "<<temp->val;
            temp = temp->next;
        }
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
       ListNode* newHead = NULL;
       ListNode* temp = head;
       ListNode* start = temp;
       ListNode* prevStart = temp;
       while(true) {
        int i = 1;
        start = temp;

        while(i < k && temp) {
            temp = temp->next;
            i++;
        }
   
        if(!temp || i < k) {
            prevStart->next = start;
            break;
        };
        ListNode* nextStart = temp->next;
        temp->next = NULL;
        print(start);
        if (!newHead) {
            newHead = reverse(start);
            temp = nextStart;
            prevStart = start;
            continue;
        } else 
            {
                prevStart->next = reverse(start);
                prevStart = start;
                temp = nextStart;
            } 
       }
       return newHead;
    }
};
