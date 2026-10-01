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
    ListNode * reverse(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* newHead = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        // return newHead;
    }

    void print(ListNode * head) {
        ListNode* temp=head;
        while(temp) {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode * temp = head;
        ListNode * start = head;
        ListNode * newHead = NULL;
        ListNode * prevStart = NULL;
        int i = 1;
        while(temp) {
            if(i % k != 0) {
                temp = temp->next;
            }else {
                ListNode * nextNode = temp->next;
                // if(nextNode) {
                //     cout<<"next node "<<nextNode->val<<endl;
                // }
                // if(temp) {
                //     cout<<"temp node "<<temp->val<<endl;
                // }

                temp->next = NULL;
                reverse(start);
                // print(x);
                cout<<"end "<<endl;
                if(!newHead) newHead = temp;
                if(prevStart) prevStart -> next = temp;
                start->next = nextNode;
                prevStart = start;
                start = nextNode;
                temp = nextNode;
                // i++;
            }
              i++;
        }
        return newHead;
        
    }

};
