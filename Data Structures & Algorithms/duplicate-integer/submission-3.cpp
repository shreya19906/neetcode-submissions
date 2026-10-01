class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> lookup;
        for(auto it: nums)
        {
            if(lookup.find(it)!=lookup.end())
                return true;
            else lookup.insert(it);
        }
        return false;
    }
};