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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* newHead = NULL;
        ListNode* temp = NULL;
        while(list1 != NULL && list2 != NULL) {
            if(list1->val <= list2->val) {
               if(!newHead) {
                 newHead = list1;
                 temp = newHead;
                 list1=list1->next;
               } else
                {
                    temp->next = list1;
                    list1 = list1->next;
                    temp = temp->next;
                }
            } else {
                 if(!newHead) {
                 newHead = list2;
                 temp = newHead;
                 list2=list2->next;
               } else
                {
                    temp->next = list2;
                    list2 = list2->next;
                    temp = temp->next;
                }
            }
          
        }
       
        while(list1!=NULL) {
            if(newHead)
            temp->next = list1;
            else
            {newHead = list1; temp = list1; list1 = list1->next;continue;}
            list1 = list1->next;
            temp = temp->next;
        }
        while(list2!=NULL) {
            if(newHead)
           { temp->next = list2;}
            else
             {newHead=list2; temp = list2; list2 = list2->next;continue;}
            list2 = list2->next;
            temp = temp->next;
        } 
        if(newHead)
        temp->next = NULL;
        
         return newHead;
    }
   
};
