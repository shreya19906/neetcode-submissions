class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
         set<int> mp;
         for(int it: nums) {
            if(mp.find(it) != mp.end())
            return true;
            else
             mp.insert(it);
         }       
         return false;
    }
};