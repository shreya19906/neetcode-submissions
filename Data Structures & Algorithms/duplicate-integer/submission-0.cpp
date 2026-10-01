class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto it: nums) {
            if(s.find(it) != s.end()) return true;
            else 
            s.insert(it);
        }
         return false;
    }
};
