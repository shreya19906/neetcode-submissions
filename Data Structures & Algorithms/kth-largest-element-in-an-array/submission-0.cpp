class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq ;
        for(auto it: nums)
        pq.push(it);

        for(int i =1;i < k && pq.size(); i++)
            pq.pop();
        return pq.size() ? pq.top() : -1;
    }
};
