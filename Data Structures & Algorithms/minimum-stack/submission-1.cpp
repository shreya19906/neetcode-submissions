class MinStack {
    int size;
    vector<int> arr;
public:
    MinStack() {
        size = 0;
    }
    
    void push(int val) {
        if (arr.size() > size ) arr[size] = val; else arr.push_back(val);
        size++;
    }
    
    void pop() {
        size--;
    }
    
    int top() {
        return arr[size -1];
    }
    
    int getMin() {
        return *min_element(arr.begin(), arr.begin()+size);
        
    }
};
