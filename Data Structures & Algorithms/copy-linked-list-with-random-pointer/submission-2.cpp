/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node * copyList(Node* head) {
        Node* temp = head;
        while(temp) {
            Node* nextNode = temp->next;
            temp->next = new Node(temp->val);
            temp->next->next = nextNode;
            temp = nextNode;
        }

      return head;
    }
    void print(Node * head) {
        Node * temp = head;
        while(temp) {
            cout<<" "<<temp;
            temp=temp->next;
        }
        cout<<endl;
    }

    Node* copyRandomList(Node* head) {
         if(!head) {Node* h = NULL;cout<<"Empty "<<endl; return h;}
        print(head);
        Node * h = copyList(head);
 print(h);

        Node* newTemp = h;
        Node * temp = h;
         Node* newHead = h->next;
        while(temp && temp->next) {
            newTemp = temp->next->next;
            cout<<endl<<"temp val "<<temp->val;
            if(temp->random) {
                cout<<endl<<" temp random "<<temp->random->val;
                if(temp->random->next)
                cout<<" "<<temp->random->next->val;
            }
            temp->next->random = temp->random ? temp->random->next :  NULL;
            temp->next->next = newTemp ?  newTemp->next : NULL;
            // temp->next = NULL;
            temp = newTemp;
        }
        print(newHead);

        
        // temp = h;
        cout<<"hellp "<<endl;
        h->next = NULL;
        // Node* newHead = h->next;
        // while(temp && temp->next) {
        //     temp->next = temp->next->next;
        //     temp = temp->next;
        // }
        return newHead;
    }
};
