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
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* temp = NULL;
        while(l1 && l2) {
            if(l1->val < l2->val) {
                temp = temp ? temp : l1;
                if(!head) head = l1;
                else
                { temp->next = l1; temp = temp->next;}
                l1= l1->next;
            } else {
                temp = temp ? temp : l2;
                if(!head) head = l2;
                else
               { temp->next = l2; temp = temp->next; }
                l2= l2->next;
            }
        } 

        while(l1) {
             temp = temp ? temp : l1;
                if(!head) head = l1;
                else
                { temp->next = l1; temp = temp->next;}
                l1= l1->next;
        }

        while(l2) {
             temp = temp ? temp : l2;
                if(!head) head = l2;
                else
               { temp->next = l2; temp = temp->next; }
                l2= l2->next;
        }
        return head;
    }

    void print(ListNode* head) {
        ListNode* temp = head;
        while(temp) {
            cout<<" "<<temp->val;
            temp = temp->next;
        }
        cout<<endl;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        if(lists.size() == 1) return lists[0];
       for(int i = 0 ; i<lists.size()-1; i++) {
            lists[i+1] = merge(lists[i], lists[i+1]);
       }
    //    ListNode* head =  merge(lists[0], lists[1]);
    //    print(head);
       return lists[lists.size()-1];
    }
};
