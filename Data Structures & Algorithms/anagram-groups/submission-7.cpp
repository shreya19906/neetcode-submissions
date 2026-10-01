class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<vector<int>, vector<string>> mp; 
        for(string &str: strs) {
            vector<int> freq(26,0);
            for(char c: str)   
                freq[c -97]++;
            mp[freq].push_back(str);    
        }
        for(auto &entry: mp)
            ans.push_back(entry.second);
     return ans;
    }
};
