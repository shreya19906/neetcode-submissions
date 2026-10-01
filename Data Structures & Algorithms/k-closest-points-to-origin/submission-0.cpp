class ComparisonClass {
public:
    bool operator() (vector<int> a , vector<int> b) {
        return (a[0]*a[0] + a[1]*a[1]) > (b[0]*b[0] + b[1]*b[1]);
     }
};

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<vector<int>, std:: vector<vector<int>>, ComparisonClass> pq;
        for(const auto& it: points)
            pq.push({it[0], it[1]});

        for(int i = 0; i < k && pq.size(); ++i)
          { ans.push_back(pq.top()); pq.pop();}
        return ans;
    }
};
