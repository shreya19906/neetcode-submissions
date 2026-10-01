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
        ListNode* temp = head;
        while(temp) {
            cout<<" "<<temp->val;
            temp = temp->next;
        }
        cout<<endl;
    }
    ListNode* reverse(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode * newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* head = NULL;
        ListNode* temp = NULL;
        // l1 = reverse(l1);
        // l2 = reverse(l2);

        while(l1 && l2)
            {
                int sum = carry + l1->val + l2->val;
                carry = sum/10;
                if(!head) 
                    {   

                        head = new ListNode(sum%10);
                        head->next = NULL;
                        temp = head;
                    }
                else {
                    temp->next = new ListNode(sum%10);
                    temp = temp->next;
                    temp->next = NULL;
                }
                l1=l1->next;
                l2=l2->next;
            }
        while(l1) {
             int sum = carry + l1->val;
             carry = sum/10;
               if(!head) 
                    {   

                        head = new ListNode(sum%10);
                        head->next = NULL;
                        temp = head;
                    }
                else {
                    temp->next = new ListNode(sum%10);
                    temp = temp->next;
                    temp->next = NULL;
                }
                l1=l1->next;
        }
        while(l2) {
             int sum = carry + l2->val;
             carry = sum/10;
               if(!head) 
                    {   

                        head = new ListNode(sum%10);
                        head->next = NULL;
                        temp = head;
                    }
                else {
                    temp->next = new ListNode(sum%10);
                    temp = temp->next;
                    temp->next = NULL;
                }
                l2=l2->next;
        }
        if(carry) {
             temp->next = new ListNode(carry);
             temp = temp->next;
             temp->next = NULL;
        }

        // head = reverse(head);
        return head;
    }
};
