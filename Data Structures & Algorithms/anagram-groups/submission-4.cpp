class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(string str: strs) {
            string s = str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto &entry: mp)
            ans.push_back(entry.second);
        return ans;
    }
};
