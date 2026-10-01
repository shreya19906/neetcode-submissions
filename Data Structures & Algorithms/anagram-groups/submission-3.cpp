class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
      map<vector<int>, vector<string>> mp;
     
      for(string s: strs) {
         vector<int> count(26);
        for(char c: s)
          count[c-97]=count[c-97]+1;
          if(mp.find(count)!=mp.end())
            mp[count].push_back(s);
          else
          { 
            vector<string> temp = {s};
            mp[count] = temp;
           }
      }
      vector<vector<string>> ans;
      for(auto it: mp)
      ans.push_back(it.second);
      return ans;
    }
};
