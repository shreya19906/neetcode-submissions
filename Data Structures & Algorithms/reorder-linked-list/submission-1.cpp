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
    void print(ListNode * head) {
        ListNode * temp = head;
        while(temp) {
            cout<<" "<<temp->val;
            temp = temp->next;
        }
        cout<<endl;
    }
    ListNode* reverse(ListNode * head) {
        if(!head || !head->next) return head;

        ListNode * newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    void reorderList(ListNode* head) {
        ListNode* mid = head, *fast = head;
        ListNode* prevMid = head;
        while(fast && fast->next) {
            fast = fast->next->next;
            prevMid = mid;
            mid = mid->next;
        }
        ListNode * head2 = reverse(mid);
        ListNode * temp = head;
        head = head->next;
        mid->next=NULL;
        // cout<<mid->val<<endl;
        print(head);
        print(head2);
        int toggle = true;
        while(head && head2) {
            if(toggle) {
                temp->next = head2;
                head2 = head2->next;
                temp = temp->next;
                toggle = false;
            } else {
                temp->next = head;
                head = head->next;
                temp = temp->next;
                toggle = true;
            }
        }
        if(head) {
            temp->next = head->next;
            head = head->next;
            temp = temp->next;
        }

        if(head2) {
            temp->next = head2->next;
            head2 = head2->next;
            temp = temp->next;
        }
    }
};
