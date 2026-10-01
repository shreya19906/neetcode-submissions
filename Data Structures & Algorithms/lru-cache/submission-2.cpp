class Node {
    public:
    Node * next;
    Node * prev;
    int val;
    int key;
    Node(int val, int key) {
        this->val = val;
        this->key = key;
        next = NULL;
        prev = NULL;
    }
};

class LRUCache {
public:
    Node * head, * tail;
    map<int, Node*> mp;
    int capacity;
    LRUCache(int capacity) {
      this->capacity = capacity;
      head = new Node(-1, -1);
      tail = new Node(-1, -1);
      head->next = tail;
      tail->prev = head;
      head->prev = NULL;
      tail->next = NULL;
    }
    
    int get(int key) {
        if(mp.find(key) == mp.end()) return -1;
        if(head->next != mp[key]) {
            Node * node = mp[key];
            node->prev->next = node->next;
            node->next->prev = node->prev;
            node->next = head->next;
            head->next->prev = node;
            head->next = node;
            node->prev = head;
        }
        return mp[key]->val;
    }
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end()) {
            Node * t = head->next;
            head->next = new Node(value, key);
            if(key == 4) {
                  cout<<"t val "<<t->val<<endl;
            }
            mp[key] = head->next;
            head->next->prev = head;
            head->next->next = t;
            t->prev = head->next;
        }
       else {
           mp[key]->val = value;
           this->get(key);
       }
      
    //    cout<<"cap "<<capacity<<" mp size "<<mp.size()<<" key "<<key;
       if(mp.size() > capacity) {
            Node * t = tail->prev;
            // cout<<" t key "<<t->key<<endl;
            mp.erase(t->key);
            t->prev->next = tail;
            tail->prev = t->prev;
       }
    }
};
