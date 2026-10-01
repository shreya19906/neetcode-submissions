class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(auto it: strs) 
          {
            string s = it;
            sort(s.begin(), s.end());
            if(mp.find(s)!=mp.end())
             {
               mp[s].push_back(it);
             } else
             {
              vector<string> a = {it};
              mp[s]=a;
             }
          }
         vector<vector<string>> ans;
          for(auto it: mp)
            ans.push_back(it.second);
            return ans;
    }
};
